/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_id_conversion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 14:26:21 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/07 15:38:37 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_pf	*ft_id_conversion(const char *format, t_pf *val)
{
	if (format[val->index] == '0' || format[val->index] == '-' ||
	(format[val->index] >= '1' && format[val->index] <= '9') ||
	format[val->index] == '*')
		ft_check_flags(format, val);
	else if (format[val->index] == '.')
	{
		if ((format[val->index + 1] >= '0' && format[val->index + 1] <= '9') ||
		format[val->index + 1] == '*')
		{
		val->index = val->index + 1;
		ft_get_precision(format, val);
		}
		else
		{
			val->index = val->index + 1;
			val->precision = 0;
			ft_id_conversion(format, val);
		}
	}
	else if (format[val->index] == '\0')
	{
		while (!(format[val->index] == 'c' || format[val->index] == 's' ||
		format[val->index] == 'd' || format[val->index] == 'i' ||
		format[val->index] == '%' || format[val->index] == 'x' ||
		format[val->index] == 'X' || format[val->index] == 'u' ||
		format[val->index] == 'p'))
			val->index = val->index + 1;
		val->index = val->index + 1;
		val->activearg = 0;
		return (0);
	}
	else if (val->activearg == 1)
	{
		if ((format[val->index] == 'c' || format[val->index] == 's' ||
		format[val->index] == 'd' || format[val->index] == 'i' ||
		format[val->index] == '%' || format[val->index] == 'x' ||
		format[val->index] == 'X' || format[val->index] == 'u' ||
		format[val->index] == 'p'))
		{
			val->activearg = 0;
			val = ft_distribute(format, val);
		}
		else
		{
			val->index = val->index + 1;
			ft_id_conversion(format, val);
		}
	}
	return (val);
}
