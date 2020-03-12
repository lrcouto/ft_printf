/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 18:15:07 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/12 13:36:21 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_pf	*ft_get_precision(const char *format, t_pf *val)
{
	int		i;
	char	*temp;

	i = val->index;
	if (format[val->index] == '*')
	{
		val->prcstar = 1;
		val->index = val->index + 1;
	}
	while (format[i] >= '0' && format[i] <= '9')
		i++;
	temp = ft_substr(format, val->index, i - val->index);
	if (val->prcstar == 1)
		val->precision = va_arg(val->args, int);
	else
	{
		val->precision = ft_atoi(temp);
		i = i - val->index;
		val->index = val->index + i;
	}
	ft_id_conversion(format, val);
	free(temp);
	return (val);
}
