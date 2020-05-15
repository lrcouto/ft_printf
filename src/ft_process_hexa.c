/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 17:27:32 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/15 14:27:09 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Lembrar que o Hexa do printf é UNSIGNED,
** tem que mudar o tipo quando for mexer.
*/

#include "../include/ft_printf.h"

t_pf	*ft_process_hexa(const char *format, t_pf *val, int arg)
{
	char	*string;
	int		i;
	int		j;

	if (!format)
		return (0);
	i = 0;
	j = 0;
	string = ft_itoa_base(arg, 16);
	if ((int)arg < 0)
		i++;
	while (string[i])
	{
		if (format[val->index] == 'X' && string[j] >= 'a' && string[j] <= 'f')
			string[i] -= 32;
		ft_putchar_fd(string[i], 1);
		j++;
		i++;
	}
	val->total = val->total + j;
	return (val);
}
