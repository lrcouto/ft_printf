/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_unsigned.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:34:01 by lcouto            #+#    #+#             */
/*   Updated: 2020/04/30 18:24:10 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static char	*ft_apply_flags(char *string, t_pf *val)
{
	char	*newstr;
	char	*padding;
	char	*ret;
	int		len;

	newstr = ft_strdup(string);
	len = ft_strlen(newstr);
	if (!(padding = (char*)malloc(sizeof(char) * (val->width - len))))
		return (0);
	if (val->zeroflag == 1)
	{
		ft_memset(padding, '0', (val->width - len));
		val->zeroflag = 0;
	}
	else
		ft_memset(padding, ' ', (val->width - len));
	ret = (val->dashflag == 1 ? ft_strjoin(newstr, padding) :
	ft_strjoin(padding, newstr));
	val->dashflag = 0;
	return (ret);
}

t_pf		*ft_process_unsigned(const char *format,
t_pf *val, unsigned int arg)
{
	char			*output;
	char			*string;
	int				j;

	j = 0;
	if (!format)
		return (0);
	string = ft_itoa_u(arg);
	if (val->width > 0 || val->precision > 0)
	{
		output = ft_apply_flags(string, val);
		val->width = 0;
		val->precision = 0;
	}
	else
		output = ft_strdup(string);
	while (output[j])
	{
		ft_putchar_fd(output[j], 1);
		j++;
	}
	free(string);
	free(output);
	val->total = val->total + j;
	return (val);
}
