/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:38:24 by lcouto            #+#    #+#             */
/*   Updated: 2020/04/27 17:06:41 by lcouto           ###   ########.fr       */
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
	ft_printf("TESTE FLAGS STRINGS: %*.3s, %25.*s, % e algo mais\n", 25, "teste", 3, "outro teste", "mais um teste");
	ft_printf("TESTE FLAGS INT : %010d, %-10d, %*.3i e algo mais\n", -2500, -25, 10, -25);
	ft_printf("TESTE FLAGS UNSIGNED : %010u, %-10u, %*.3u e algo mais\n", 2500, 25, 10, 25);
	return (0);
}
