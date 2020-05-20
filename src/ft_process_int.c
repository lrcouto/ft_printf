/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 14:58:20 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/20 16:02:59 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void	ft_handle_negatives(char *string, t_pf *val)
{
	if (string[0] == '-')
		val->width = val->precision + 1;
	else
		val->width = val->precision;
}

static char	*ft_apply_precision(char *string, t_pf *val)
{
	int		len;
	int		num;

	len = ft_strlen(string);
	num = (string[0] == '-' ? (len - 1) : len);
	if (val->precision > val->width)
		ft_handle_negatives(string, val);
	val->padding = ft_calloc((val->precision - num), sizeof(char) + 1);
	if (num >= val->precision)
		val->newstr = ft_strdup(string);
	else
	{
		ft_memset(val->padding, '0', (val->precision - num));
		val->newstr = ft_strjoin(val->padding, string);
		if (string[0] == '-')
		{
			val->newstr[0] = '-';
			val->newstr[val->precision - num] = '0';
		}
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
		if (!(val->padding = ft_calloc((val->width - len), sizeof(char) + 1)))
			return (0);
		if (val->zeroflag == 1 && val->width != len)
		{
			ft_memset(val->padding, '0', (val->width - len));
			if (val->newstr[0] == '-')
			{
				if (val->width > len)
					val->newstr[0] = '0';
				val->padding[0] = '-';
			}
			val->zeroflag = 0;
		}
		else
			ft_memset(val->padding, ' ', (val->width - len));
		ret = (val->dashflag == 1 ? ft_strjoin(val->newstr, val->padding) :
		ft_strjoin(val->padding, val->newstr));
		free(val->padding);
	}
	else
		ret = ft_strdup(val->newstr);
	free(val->newstr);
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
	if (ft_strncmp(string, "0", 3) == 0 && val->precision == 0 && val->emptyprc == 1)
	{
		free(string);
		if (!(string = ft_calloc(1, sizeof(char) + 1)))
			return(0);
		val->emptyprc = 0;
	}
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
