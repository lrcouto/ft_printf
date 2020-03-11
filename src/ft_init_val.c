/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_val.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 17:38:17 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/11 14:05:18 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_pf	*ft_init_val(t_pf *val)
{
	val->index = 0;
	val->total = 0;
	val->zeroflag = 0;
	val->dashflag = 0;
	val->widstar = 0;
	val->prcstar = 0;
	val->width = 0;
	val->precision = 0;
	return (val);
}
