/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:38:24 by lcouto            #+#    #+#             */
/*   Updated: 2020/03/12 18:31:01 by lcouto           ###   ########.fr       */
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
	float	ftest;
	int 	p;

	ftest = 3.45678;
	charcount = ft_printf("TESTE INT: %d, %i\n", 1234, -5678);
	printf("%d\n", charcount);
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
	printf("TESTE PRECISION ORIGINAL: %-20.010s , %.10d\n", "TesteTesteTeste", 58);
	ft_printf("TESTE FLAGS STRINGS: %-25s\n", "teste"); 
		return (0);
}
