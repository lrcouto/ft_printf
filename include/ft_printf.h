/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 13:16:52 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/05 18:40:09 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <inttypes.h>

typedef struct	s_pf
{
	int		index;
	int		total;
	int		zeroflag;
	int		dashflag;
	int		widstar;
	int		prcstar;
	int		width;
	int		precision;
	va_list	args;
}				t_pf;

int				ft_printf(const char *format, ...);

t_pf			*ft_id_conversion(const char *format, t_pf *val);

t_pf			*ft_distribute(const char *format, t_pf *val);

t_pf			*ft_process_int(const char *format, t_pf *val, int arg);

t_pf			*ft_process_char(const char *format, t_pf *val, int arg);

t_pf			*ft_process_string(const char *format, t_pf *val, char *arg);

t_pf			*ft_process_percent(const char *format, t_pf *val);

t_pf			*ft_process_hexa(const char *format, t_pf *val, int arg);

t_pf			*ft_process_unsigned(const char *format, t_pf *val, unsigned int arg);

t_pf			*ft_process_ptraddress(const char *format, t_pf *val,
uintptr_t arg);

t_pf			*ft_init_val(t_pf *val);

void			ft_check_flags(const char *format, t_pf *val);

void			ft_get_width(const char *format, t_pf *val);

void			ft_get_precision(const char *format, t_pf *val);

#endif
