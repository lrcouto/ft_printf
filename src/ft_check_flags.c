/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 16:53:29 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/12 14:31:03 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_pf	*ft_check_flags(const char *format, t_pf *val)
{
	if (format[val->index] == '0' && val->dashflag == 0 &&
	format[val->index - 1] == '%')
	{
		val->zeroflag = 1;
		val->index = val->index + 1;
		return (ft_check_flags(format, val));
	}
	if (format[val->index] == '-' && val->zeroflag == 0)
	{
		val->dashflag = 1;
		val->index = val->index + 1;
		return (ft_check_flags(format, val));
	}
	if ((format[val->index] >= '0' && format[val->index] <= '9') ||
	format[val->index] == '*')
	{
		ft_get_width(format, val);
		return (ft_check_flags(format, val));
	}
	return (val);
}
