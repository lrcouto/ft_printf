/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_val.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 17:38:17 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/13 18:29:00 by lcouto           ###   ########.fr       */
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
	val->activearg = 0;
	val->emptyprc = 0;
	val->newstr = NULL;
	val->padding = NULL;
	return (val);
}
