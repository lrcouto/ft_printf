/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 12:19:29 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/17 13:50:32 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_pf	*ft_process_char(const char *format, t_pf *val, int arg)
{
	char c;

	if (!format)
		return (0);
	c = (char)arg;
	ft_putchar_fd(c, 1);
	val->total = val->total + 1;
	return (val);
}
