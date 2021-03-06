/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 18:15:07 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/15 14:27:02 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void	ft_get_arg(t_pf *val, char *temp, int i)
{
	if (val->prcstar == 1)
	{
		val->precision = va_arg(val->args, int);
		val->prcstar = 0;
		val->index = val->index + 1;
	}
	else
	{
		val->precision = ft_atoi(temp);
		i = i - val->index;
		val->index = val->index + i;
	}
	if (val->precision == 0)
		val->emptyprc = 1;
	if (val->precision < 0)
		val->precision = 0;
}

void		ft_get_precision(const char *format, t_pf *val)
{
	int		i;
	char	*temp;

	if (!((format[val->index] >= '0' && format[val->index] <= '9') ||
	ft_check_conversions(format, val) == 1 || format[val->index] == '*'))
	{
		val->index = val->index + 1;
		ft_id_conversion(format, val);
	}
	if (format[val->index] == '*')
		val->prcstar = 1;
	i = val->index;
	while (format[i] >= '0' && format[i] <= '9')
		i++;
	temp = (i == val->index ? ft_strdup("0") :
	ft_substr(format, val->index, i - val->index));
	ft_get_arg(val, temp, i);
	if (val->precision > 0)
		val->emptyprc = 0;
	free(temp);
	ft_id_conversion(format, val);
}
