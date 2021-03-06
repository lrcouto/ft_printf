/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 17:27:32 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/21 22:01:29 by lcouto           ###   ########.fr       */
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
	if (num >= val->precision)
		val->newstr = ft_strdup(string);
	else
	{
		if (!(val->padding = ft_calloc((val->precision - num),
		sizeof(char) + 1)))
			return (0);
		ft_memset(val->padding, '0', (val->precision - num));
		val->newstr = ft_strjoin(val->padding, string);
		free(val->padding);
	}
	val->zeroflag = 0;
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
		if (!(val->padding = ft_calloc((val->width - len), sizeof(char) + 1)))
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

static char	*ft_get_output(char *string, t_pf *val)
{
	char *output;

	if (ft_strncmp(string, "0", 3) == 0 &&
	val->precision == 0 && val->emptyprc == 1)
	{
		if (!(string = ft_calloc(1, sizeof(char) + 1)))
			return (0);
		val->emptyprc = 0;
		val->zeroflag = 0;
	}
	else if (val->precision == 0 && val->emptyprc == 1)
	{
		val->emptyprc = 0;
		val->zeroflag = 0;
	}
	if (val->width > 0 || val->precision > 0)
	{
		output = ft_apply_flags(string, val);
		val->width = 0;
		val->precision = 0;
	}
	else
		output = ft_strdup(string);
	return (output);
}

t_pf		*ft_process_hexa(const char *format, t_pf *val, unsigned int arg)
{
	char	*string;
	char	*output;
	int		j;

	if (!format)
		return (0);
	j = 0;
	string = ft_itoa_base_u(arg, 16);
	output = ft_get_output(string, val);
	while (output[j])
	{
		if (format[val->index] == 'X' && output[j] >= 'a' && output[j] <= 'f')
			output[j] -= 32;
		ft_putchar_fd(output[j], 1);
		j++;
	}
	val->total = val->total + j;
	free(output);
	free(string);
	return (val);
}
