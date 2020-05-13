/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 12:19:29 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/13 18:20:08 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_putstr(char *string)
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

static int	ft_apply_flags(t_pf *val, char c)
{
	int j;

	j = 0;
	if (val->zeroflag == 1)
		ft_memset(val->padding, '0', val->width - 1);
	else
		ft_memset(val->padding, ' ', val->width - 1);
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
	return (j);
}

t_pf		*ft_process_char(const char *format, t_pf *val, int arg)
{
	char	c;
	int		j;

	j = 0;
	if (!format)
		return (0);
	c = (char)arg;
	if (!(val->padding = ft_calloc(val->width, sizeof(char) + 1)))
		return (0);
	if (val->width > 0)
		j = ft_apply_flags(val, c);
	else
		ft_putchar_fd(c, 1);
	val->total = val->total + j + 1;
	free(val->padding);
	return (val);
}
