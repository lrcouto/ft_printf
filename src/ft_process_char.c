/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 12:19:29 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/06 13:38:31 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_pf	*ft_process_char(const char *format, t_pf *val, char *arg)
{
	char c;

	if (!format)
		return (0);
	c = (char)arg;
	ft_putchar_fd(c, 1);
	val->total = val->total + 1;
	return (val);
}
