/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 12:59:04 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/10 18:07:42 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_pf	*ft_process_string(const char *format, t_pf *val, char *arg)
{
	char	*string;
	int		j;

	j = 0;
	if (!format)
		return (0);
	if (!(string = ft_calloc(ft_strlen(arg), (sizeof(char) + 1))))
		return (0);
	ft_memcpy(string, arg, ft_strlen(arg));
	while (string[j])
	{
		ft_putchar_fd(string[j], 1);
		j++;
	}
	free(string);
	val->total = val->total + j;
	return (val);
}
