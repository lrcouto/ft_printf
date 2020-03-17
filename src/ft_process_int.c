/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 14:58:20 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/17 13:47:59 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_pf	*ft_process_int(const char *format, t_pf *val, int arg)
{
	char	*string;
	int		j;

	j = 0;
	if (!format)
		return (0);
	string = ft_itoa((int)arg);
	while (string[j])
	{
		ft_putchar_fd(string[j], 1);
		j++;
	}
	val->total = val->total + j;
	return (val);
}
