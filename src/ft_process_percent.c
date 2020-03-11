/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_percent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 15:18:34 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/04 15:31:29 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_pf	*ft_process_percent(const char *format, t_pf *val)
{
	if (!format)
		return (0);
	ft_putchar_fd('%', 1);
	val->total = val->total + 1;
	return (val);
}
