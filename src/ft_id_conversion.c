/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_id_conversion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 14:26:21 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/07 18:20:51 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void	ft_seek_conversion(const char *format, t_pf *val)
{
	if (ft_check_conversions(format, val) == 1)
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

static int	ft_seek_flags(const char *format, t_pf *val)
{
	if (format[val->index] == '0' || format[val->index] == '-' ||
	(format[val->index] >= '1' && format[val->index] <= '9') ||
	format[val->index] == '*')
		return (1);
	else
		return (0);
}

static void	ft_check_precision(const char *format, t_pf *val)
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

t_pf		*ft_id_conversion(const char *format, t_pf *val)
{
	if (ft_seek_flags(format, val) == 1)
		ft_check_flags(format, val);
	else if (format[val->index] == '.')
		ft_check_precision(format, val);
	else if (format[val->index] == '\0')
	{
		while (ft_check_conversions(format, val) == 0)
			val->index = val->index + 1;
		val->index = val->index + 1;
		val->activearg = 0;
		return (0);
	}
	else if (val->activearg == 1)
		ft_seek_conversion(format, val);
	return (val);
}
