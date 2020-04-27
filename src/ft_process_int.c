/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 14:58:20 by lcouto            #+#    #+#             */
/*   Updated: 2020/04/27 17:57:54 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static char	*ft_apply_flags(char *string, t_pf *val)
{
	char	*newstr;
	char	*padding;
	char	*ret;
	int		len;

	val->precision = 0;
	newstr = ft_strdup(string);
	len = ft_strlen(newstr);
	if (!(padding = (char*)malloc(sizeof(char) * (val->width - len))))
		return (0);
	if (val->zeroflag == 1)
	{
		ft_memset(padding, '0', (val->width - len));
		if (newstr[0] == '-')
		{
			newstr[0] = '0';
			padding[0] = '-';
		}
		val->zeroflag = 0;
	}
	else
		ft_memset(padding, ' ', (val->width - len));
	if (val->dashflag == 1)
	{
		ret = ft_strjoin(newstr, padding);
		val->dashflag = 0;
	}
	else
		ret = ft_strjoin(padding, newstr);
	val->width = 0;
	return (ret);
}

t_pf		*ft_process_int(const char *format, t_pf *val, int arg)
{
	char	*output;
	char	*string;
	int		j;

	j = 0;
	if (!format)
		return (0);
	string = ft_itoa((int)arg);
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
