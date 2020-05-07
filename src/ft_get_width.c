/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 16:17:01 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/07 17:59:34 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void	ft_get_arg(t_pf *val, char *temp, int i)
{
	if (val->widstar == 1)
	{
		val->width = va_arg(val->args, int);
		val->widstar = 0;
	}
	else
	{
		val->width = ft_atoi(temp);
		i = i - val->index;
		val->index = val->index + i;
	}
	if (val->width < 0)
	{
		val->width = val->width * -1;
		val->dashflag = 1;
	}
}

void		ft_get_width(const char *format, t_pf *val)
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
	ft_get_arg(val, temp, i);
	free(temp);
	ft_id_conversion(format, val);
}
