/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 12:59:04 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/22 18:25:37 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

static char	*ft_apply_padding(t_pf *val, int len)
{
	char	*ret;

	if (!(val->padding = ft_calloc((val->width - len), sizeof(char) + 1)))
		return (0);
	if (val->zeroflag == 1)
		ft_memset(val->padding, '0', (val->width - len));
	else
		ft_memset(val->padding, ' ', (val->width - len));
	ret = (val->dashflag == 1 ? ft_strjoin(val->newstr, val->padding) :
		ft_strjoin(val->padding, val->newstr));
	free(val->padding);
	return (ret);
}

static char	*ft_apply_flags(char *string, t_pf *val)
{
	char	*ret;
	int		len;

	len = ft_strlen(string);
	if (len > val->precision && val->precision > 0)
		val->newstr = ft_substr(string, 0, val->precision);
	else if (val->emptyprc == 1)
	{
		if (!(val->newstr = ft_calloc(1, sizeof(char))))
			return (0);
		val->emptyprc = 0;
	}
	else
		val->newstr = ft_strdup(string);
	len = ft_strlen(val->newstr);
	if (len < val->width && val->width > 0)
		ret = ft_apply_padding(val, len);
	else
		ret = ft_strdup(val->newstr);
	val->dashflag = 0;
	val->zeroflag = 0;
	val->width = 0;
	val->precision = 0;
	free(val->newstr);
	return (ret);
}

static char	*ft_get_string(char *arg)
{
	char *string;

	if (!arg)
	{
		if (!(string = ft_calloc(ft_strlen("(null)"), (sizeof(char) + 1))))
			return (0);
		ft_memcpy(string, "(null)", ft_strlen("(null)"));
	}
	else if (ft_strncmp(arg, "", sizeof(char)) == 0)
	{
		if (!(string = ft_calloc(1, (sizeof(char) + 1))))
			return (0);
		ft_memcpy(string, "", ft_strlen(""));
	}
	else
	{
		if (!(string = ft_calloc(ft_strlen(arg), (sizeof(char) + 1))))
			return (0);
		ft_memcpy(string, arg, ft_strlen(arg));
	}
	return (string);
}

t_pf		*ft_process_string(const char *format, t_pf *val, char *arg)
{
	char	*output;
	char	*string;
	int		j;

	j = 0;
	if (!format)
		return (0);
	string = ft_get_string(arg);
	if (val->width > 0 || val->precision > 0 || val->emptyprc == 1)
		output = ft_apply_flags(string, val);
	else
		output = ft_strdup(string);
	while (output[j])
	{
		ft_putchar_fd(output[j], 1);
		j++;
	}
	free(string);
	free(output);
	val->total = val->total + j;
	return (val);
}
