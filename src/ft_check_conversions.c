/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_conversions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 16:29:46 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/07 17:59:32 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		ft_check_conversions(const char *format, t_pf *val)
{
	if (format[val->index] == 'c' || format[val->index] == 's' ||
	format[val->index] == 'd' || format[val->index] == 'i' ||
	format[val->index] == '%' || format[val->index] == 'x' ||
	format[val->index] == 'X' || format[val->index] == 'u' ||
	format[val->index] == 'p')
		return (1);
	else
		return (0);
}
