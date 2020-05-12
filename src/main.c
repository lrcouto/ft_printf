/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:38:24 by lcouto            #+#    #+#             */
/*   Updated: 2020/05/01 17:35:004 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <limits.h>
#include <stdio.h>

int		main(void)
{
	int 	charcount;
	int 	charcount2;
	int 	charcount3;
	int 	p;

	charcount = ft_printf("TESTE INT: %d, %i\n", 1234, -5678);
	printf("%i\n", charcount);
	ft_printf("TESTE CHAR: %15d, %c, %c, %c, D\n", 97, 'A', 'B', 'C');
	ft_printf("TESTE STRING: %s! %s Não é um arg.\n", "Um arg", "Outro arg!");
	ft_printf("Tá 100%% essa porra? Não!\n");
	ft_printf("TESTE HEXA: %x, %X\n", -123456, 123456);
	ft_printf("TESTE UNSIGNED: %u, %u\n", -329496729, UINT_MAX);
	printf("ORIGINAL UNSIGNED: %u, %u\n", -329496729, UINT_MAX);
	charcount2 = ft_printf("TESTE POINTER ADDRESS - P: %p, %p\n", &p,
			&charcount);
	charcount3 = printf("TESTE POINTER ADDRESS - O: %p, %p\n", &p, &charcount);
	printf("RETURN ORIGINAL: %d, RETURN PIRATA: %d\n", charcount2, charcount3);
	printf("TESTE PRECISION ORIGINAL: %-20.010s , %020d e mais\n", "TesteTesteTeste", -58);
	printf("TESTE FLAGS STRINGS ORIGINAL: %*.3s, %-25.*s, e algo mais\n", 25, "teste", 3, "outro teste");
	ft_printf("TESTE FLAGS STRINGS PIRATA: %*.3s, %-25.*s, e algo mais\n", 25, "teste", 3, "outro teste");
	printf("TESTE FLAGS INT ORIGINAL: %010d, %-10d, %.5i e algo mais\n", -2500, -25, -2500);
	printf("%20c\n", 'c');
	ft_printf("TESTE FLAGS INT PIRATA: %010d, %-0-0-0-10d, %10.5i e algo mais\n", -2500, -25, -2500);
	printf("TESTE FLAGS UNSIGNED ORIGINAL: %010u, %-10u, %*.3u e algo mais\n", 2500, 25, 10, 25);
	ft_printf("TESTE FLAGS UNSIGNED PIRATA: %010///u, %-10u, %*.3u e algo mais\n", 2500, 25, 10, 25);
	ft_printf("%kasa\n");
	return (0);
}
