/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_exists.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 17:50:53 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/08 17:59:005 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_conversion_exists(const char *format, t_pf *val)
{
	int	i;
	int	j;

	i = val->index;
	j = i;
	while (format[i])
	{
		if (format[i] == '%')
			break;
		i++;
	}
	while (j <= i)
	{
		if (format[j] == '\0')
		{
			val->index = j;
			return (1);
		}
		if (format[j] == 'c' || format[j] == 's' ||
		format[j] == 'd' || format[j] == 'i' ||
		format[j] == '%' || format[j] == 'x' ||
		format[j] == 'X' || format[j] == 'u' ||
		format[j] == 'p')
			return (1);
		j++;
	}
	val->activearg = 0;
	return(0);
}
