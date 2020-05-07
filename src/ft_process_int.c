/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 14:58:20 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/07 15:38:36 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static char *ft_apply_precision(char *string, t_pf *val)
{
	int		len;
	int		num;
	char	*newstr;
	char	*padding;

	len = ft_strlen(string);
	num = (string[0] == '-' ? (len - 1) : len);
	if (val->precision > val->width)
	{
		if (string[0] == '-')
			val->width = val->precision + 1;
		else
			val->width = val->precision;
	}
	padding = ft_calloc((val->precision - num), sizeof(char));
	if (num >= val->precision)
		newstr = ft_strdup(string);
	else
	{
		ft_memset(padding, '0', (val->precision - num));
		newstr = ft_strjoin(padding, string);
		if (string[0] == '-')
			{
				newstr[0] = '-';
				newstr[val->precision - num] = '0';
			}
	}
	val->zeroflag = 0;
	free(padding);
	return (newstr);
}

static char	*ft_apply_flags(char *string, t_pf *val)
{
	char	*newstr;
	char	*padding;
	char	*ret;
	int		len;

	newstr = (val->precision > 0 ? ft_apply_precision(string, val)
	: ft_strdup(string));
	len = ft_strlen(newstr);
	if (!(padding = (char*)malloc(sizeof(char) * (val->width - len))))
		return (0);
	if (val->zeroflag == 1 && val->width != len)
	{
		ft_memset(padding, '0', (val->width - len));
		if (newstr[0] == '-')
		{
			if (val->width > len)
				newstr[0] = '0';
			padding[0] = '-';
		}
		val->zeroflag = 0;
	}
	else
		ft_memset(padding, ' ', (val->width - len));
	ret = (val->dashflag == 1 ? ft_strjoin(newstr, padding) :
	ft_strjoin(padding, newstr));
	val->dashflag = 0;
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
	free(output);
	free(string);
	val->total = val->total + j;
	return (val);
}
