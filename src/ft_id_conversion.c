/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_id_conversion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 14:26:21 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/11 14:27:34 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_pf	*ft_id_conversion(const char *format, t_pf *val, va_list args)
{
	if (format[val->index] == '0' || format[val->index] == '-' ||
	format[val->index] == '.' || format[val->index] == '*' ||
	(format[val->index] >= '1' && format[val->index] <= '9'))
		val = ft_check_flags(format, val, args);
	else if (format[val->index] == 'c' || format[val->index] == 's' ||
	format[val->index] == 'd' || format[val->index] == 'i' ||
	format[val->index] == '%' || format[val->index] == 'x' ||
	format[val->index] == 'X' || format[val->index] == 'u' ||
	format[val->index] == 'p')
		val = ft_distribute(format, val, args);
	return (val);
}