/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_percent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 15:18:34 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/13 18:20:08 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static char	*ft_apply_flags(char *string, t_pf *val)
{
	char	*ret;
	int		len;

	len = ft_strlen(string);
	if (len > val->precision && val->precision > 0)
		val->newstr = ft_substr(string, 0, val->precision);
	else
		val->newstr = ft_strdup(string);
	len = ft_strlen(val->newstr);
	if (!(val->padding = (char*)malloc(sizeof(char) * (val->width - len))))
		return (0);
	if (val->zeroflag == 1)
		ft_memset(val->padding, '0', (val->width - len));
	else
		ft_memset(val->padding, ' ', (val->width - len));
	ret = (val->dashflag == 1 ? ft_strjoin(val->newstr, val->padding) :
	ft_strjoin(val->padding, val->newstr));
	val->dashflag = 0;
	val->zeroflag = 0;
	val->width = 0;
	val->precision = 0;
	return (ret);
}

t_pf		*ft_process_percent(const char *format, t_pf *val)
{
	char	*output;
	char	*string;
	int		j;

	j = 0;
	if (!format)
		return (0);
	if (!(string = ft_calloc(1, (sizeof(char) + 1))))
		return (0);
	string = ft_memset(string, '%', sizeof(char));
	if (val->width > 0 || val->precision > 0)
		output = ft_apply_flags(string, val);
	else
		output = ft_strdup(string);
	while (output[j])
	{
		ft_putchar_fd(output[j], 1);
		j++;
	}
	free(output);
	free(string);
	val->total = val->total + j;
	return (val);
}
