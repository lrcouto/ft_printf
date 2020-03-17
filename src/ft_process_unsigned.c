/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_unsigned.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:34:01 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/17 13:59:01 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_pf	*ft_process_unsigned(const char *format, t_pf *val, unsigned int arg)
{
	char	*string;
	int		j;

	j = 0;
	if (!format)
		return (0);
	string = ft_itoa_u(arg);
	while (string[j])
	{
		ft_putchar_fd(string[j], 1);
		j++;
	}
	val->total = val->total + j;
	return (val);
}
