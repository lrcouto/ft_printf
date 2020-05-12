/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 12:19:29 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/12 18:38:42 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		ft_putstr(char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		ft_putchar_fd(string[i], 1);
		i++;
	}
	return (i);
}

t_pf	*ft_process_char(const char *format, t_pf *val, int arg)
{
	char	c;
	int		j;

	j = 0;
	if (!format)
		return (0);
	c = (char)arg;
	if (!(val->padding = (char*)malloc(sizeof(char) * (val->width))))
		return (0);
	if (val->width > 0 || val->precision > 0)
	{
		if (val->zeroflag == 1)
			ft_memset(val->padding, '0', val->width);
		else
			ft_memset(val->padding, ' ', val->width);
		if (val->dashflag == 1)
		{
			ft_putchar_fd(c, 1);
			j = ft_putstr(val->padding);
		}
		else
		{
			j = ft_putstr(val->padding);
			ft_putchar_fd(c, 1);
		}
	}
	else
	{
		ft_putchar_fd(c, 1);
		j = 1;
	}
	val->total = val->total + j;
	free(val->padding);
	return (val);
}
