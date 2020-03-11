/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 13:14:27 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/11 15:13:51 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

int		ft_printf(const char *format, ...)
{
	va_list		args;
	t_pf		val;

	ft_init_val(&val);
	va_start(args, format);
	while (format && format[val.index])
	{
		if (format[val.index] == '%')
		{
			val.index++;
			ft_id_conversion(format, &val, args);
		}
		else
		{
			ft_putchar_fd(format[val.index], 1);
			val.total++;
		}
		val.index++;
	}
	va_end(args);
	return (val.total);
}
