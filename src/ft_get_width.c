/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 16:17:01 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/11 19:22:38 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_pf	*ft_get_width(const char *format, t_pf *val)
{
	int		i;
	char	*temp;

	i = val->index;
	if (format[val->index] == '*')
	{
		val->widstar = 1;
		val->index = val->index + 1;
	}
	while (format[i] >= '0' && format[i] <= '9')
		i++;
	temp = ft_substr(format, val->index, i - val->index);
	if (val->widstar == 1)
		val->width = va_arg(val->args, int);
	else
	{
		val->width = ft_atoi(temp);
		i = i - val->index;
		val->index = val->index + i;
	}
	ft_id_conversion(format, val);
	free(temp);
	return (val);
}
