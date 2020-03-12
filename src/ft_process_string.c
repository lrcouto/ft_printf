/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 12:59:04 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/12 18:31:04 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static char	*ft_apply_flags(char *string, t_pf *val)
{
	char	*newstr;
	char	*padding;
	char	*ret;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(string);	
	if (len < val->precision && val->precision > 0)
		newstr = ft_substr(string, 0, val->precision);
	else
		newstr = strdup(string);
	len = ft_strlen(newstr);
	ret = NULL;
	if (len < val->width && val->width > 0)
	{
		if (!(padding = (char*)malloc(sizeof(char) * (val->width - len))))
			return (0);
		ft_memset(padding, ' ', (val->width - len));
		if (val->dashflag == 1)
		{
			ret = ft_strjoin(newstr, padding);
			val->dashflag = 0;
		}
		else
			ret = ft_strjoin(padding, newstr);
	}
	return (ret);
}

t_pf		*ft_process_string(const char *format, t_pf *val, char *arg)
{
	char	*output;
	char 	*string;
	int		j;

	j = 0;
	if (!format)
		return (0);
	if (!(string = ft_calloc(ft_strlen(arg), (sizeof(char) + 1))))
		return (0);
	ft_memcpy(string, arg, ft_strlen(arg));
	if (val->width > 0 || val->precision > 0)
		output = ft_apply_flags(string, val);
	else
		output = ft_strdup(string);
	while (string[j])
	{
		ft_putchar_fd(string[j], 1);
		j++;
	}
	free(string);
	free(output);
	val->total = val->total + j;
	return (val);
}
