/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_ptraddress.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 13:40:35 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/06 16:37:56 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_pf	*ft_process_ptraddress(const char *format, t_pf *val, uintptr_t arg)
{
	char	*string;
	int		i;
	int		j;

	i = 0;
	j = 2;
	if (!format)
		return (0);
	string = ft_itoa_ptr(arg, 16);
	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	while (string[i])
	{
		ft_putchar_fd(string[i], 1);
		j++;
		i++;
	}
	val->total = val->total + j;
	return (val);
}
