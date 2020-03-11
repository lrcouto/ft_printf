/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 16:17:01 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/11 15:24:25 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_pf	*ft_get_width(const char *format, t_pf *val, va_list args)
{
	int		i;
	char	*temp;

	if (!args)
		return (0);
	i = val->index;
	while (format[i] >= '0' && format[i] <= '9')
		i++;
	temp = ft_substr(format, val->index, i - val->index);
	if (val->widstar == 1)
		val->width = va_arg(args, int);
	else
		val->width = ft_atoi(temp);
	i = i - val->index;
	val->index = val->index + i;
	free(temp);
	return (val);
}
