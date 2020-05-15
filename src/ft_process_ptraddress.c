/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_ptraddress.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 13:40:35 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/15 15:42:39 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static char	*ft_apply_precision(char *string, t_pf *val)
{
	int		len;
	int		num;

	len = ft_strlen(string);
	num = (string[0] == '-' ? (len - 1) : len);
	if (val->precision > val->width)
		val->width = val->precision;
	val->padding = ft_calloc((val->precision - num), sizeof(char) + 1);
	if (num >= val->precision)
		val->newstr = ft_strdup(string);
	else
	{
		ft_memset(val->padding, '0', (val->precision - num));
		val->newstr = ft_strjoin(val->padding, string);
	}
	val->zeroflag = 0;
	free(val->padding);
	return (val->newstr);
}

static char	*ft_apply_flags(char *string, t_pf *val)
{
	char	*ret;
	int		len;

	val->newstr = (val->precision > 0 ? ft_apply_precision(string, val)
	: ft_strdup(string));
	len = ft_strlen(val->newstr);
	if (val->width > len)
	{
		if (!(val->padding = ft_calloc((val->width - len), sizeof(char))))
			return (0);
		if (val->zeroflag == 1 && val->width != len)
		{
			ft_memset(val->padding, '0', (val->width - len));
			val->zeroflag = 0;
		}
		else
			ft_memset(val->padding, ' ', (val->width - len));
		ret = (val->dashflag == 1 ? ft_strjoin(val->newstr, val->padding) :
		ft_strjoin(val->padding, val->newstr));
	}
	else
		ret = ft_strdup(val->newstr);
	val->dashflag = 0;
	return (ret);
}

t_pf	*ft_process_ptraddress(const char *format, t_pf *val, uintptr_t arg)
{
	char	*string;
	char	*output;
	char	*zeroxis;
	int		j;

	j = 0;
	if (!(zeroxis = ft_calloc(2, sizeof(char) + 1)))
		return (0);
	if (!format)
		return (0);
	ft_memcpy(zeroxis, "0x", 2);
	string = ft_strjoin(zeroxis, ft_itoa_ptr(arg, 16));
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
	val->total = val->total + j;
	return (val);
}
