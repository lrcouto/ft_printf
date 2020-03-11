/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distribute.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 14:46:12 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/11 14:28:16 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_pf	*ft_distribute(const char *format, t_pf *val, va_list args)
{
	if (format[val->index] == 'd' || format[val->index] == 'i')
		val = ft_process_int(format, val, va_arg(args, char*));
	else if (format[val->index] == 'c')
		val = ft_process_char(format, val, va_arg(args, char*));
	else if (format[val->index] == 's')
		val = ft_process_string(format, val, va_arg(args, char*));
	else if (format[val->index] == 'x' || format[val->index] == 'X')
		val = ft_process_hexa(format, val, va_arg(args, char*));
	else if (format[val->index] == 'u')
		val = ft_process_unsigned(format, val, va_arg(args, char*));
	else if (format[val->index] == 'p')
		val = ft_process_ptraddress(format, val, va_arg(args, uintptr_t));
	else if (format[val->index] == '%')
		val = ft_process_percent(format, val);
	return (val);
}