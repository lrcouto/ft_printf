/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 16:53:29 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/12 17:07:51 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_check_flags(const char *format, t_pf *val)
{
	if (format[val->index] == '0' && (format[val->index - 1] == '%' ||
	format[val->index - 1] == ' '))
	{
		val->zeroflag = 1;
		val->dashflag = 0;
		val->index = val->index + 1;
		ft_check_flags(format, val);
	}
	if (format[val->index] == '-')
	{
		val->dashflag = 1;
		val->zeroflag = 0;
		val->index = val->index + 1;
		ft_check_flags(format, val);
	}
	if ((format[val->index] >= '0' && format[val->index] <= '9') ||
	format[val->index] == '*')
		ft_get_width(format, val);
	if (format[val->index] == '.' && ((format[val->index + 1] >= '0'
	&& format[val->index + 1] <= '9') || format[val->index + 1] == '*'))
	{
		val->index = val->index + 1;
		ft_get_precision(format, val);
	}
	ft_id_conversion(format, val);
}
