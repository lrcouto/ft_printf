/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 13:14:27 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/06 15:11:38 by lcouto           ###   ########.fr       */
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
			val.activearg = 1;
			ft_id_conversion(format, &val);
		}
		else
		{
			ft_putchar_fd(format[val.index], 1);
			val.total++;
		}
		val.index++;
	}
	va_end(val.args);
	return (val.total);
}
