/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 13:14:27 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/11 18:59:21 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

int		ft_printf(const char *format, ...)
{
	t_pf		val;

	ft_init_val(&val);
	va_start(val.args, format);
	while (format && format[val.index])
	{
		if (format[val.index] == '%')
		{
			val.index++;
			ft_id_conversion(format, &val);
		}
		else
		{
			ft_putchar_fd(format[val.index], 1);
			val.total++;
		}
		val.index++;
	}
	printf("ZERO %d DASH %d PRECISION %d WIDTH %d\n", val.zeroflag, val.dashflag, val.precision, val.width);
	va_end(val.args);
	return (val.total);
}
