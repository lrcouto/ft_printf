/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_unsigned.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:34:01 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/06 13:58:41 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_pf	*ft_process_unsigned(const char *format, t_pf *val, char *arg)
{
	char	*string;
	int		j;

	j = 0;
	if (!format)
		return (0);
	string = ft_itoa_u((unsigned int)arg);
	while (string[j])
	{
		ft_putchar_fd(string[j], 1);
		j++;
	}
	val->total = val->total + j;
	return (val);
}
