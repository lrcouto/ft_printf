/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 14:10:27 by dmoreira          #+#    #+#             */
/*   Updated: 2020/03/13 17:09:54 by dmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

/*
** extern t_param *g_param;
*/

int main(void)
{
	int letras;

	char string[] = ">>>>>>>>>>>>>>>>>>>>>>>>>PRINT INTEGER<<<<<<<<<<<<<<<<<<<<<<<\n\n";
	ft_printf(string);
	char string1[] = "TESTE 1:%d:";
	letras = ft_printf(string1, 123);
	printf("\nTESTE R:123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 12\n\n", letras);

	char string2[] = "TESTE 2:%3d:";
	letras = ft_printf(string2, 123);
	printf("\nTESTE R:123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 12\n\n", letras);

	char string3[] = "TESTE 3:%4d:";
	letras = ft_printf(string3, 123);
	printf("\nTESTE R: 123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string4[] = "TESTE 4:%4d:";
	letras = ft_printf(string4, -123);
	printf("\nTESTE R:-123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string5[] = "TESTE 5:%5d:";
	letras = ft_printf(string5, -123);
	printf("\nTESTE R: -123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string6[] = "TESTE 6:%6d:";
	letras = ft_printf(string6, -123);
	printf("\nTESTE R:  -123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string7[] = "TESTE 7:%-3d:";
	letras = ft_printf(string7, 123);
	printf("\nTESTE R:123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 12\n\n", letras);

	char string8[] = "TESTE 8:%-4d:";
	letras = ft_printf(string8, 123);
	printf("\nTESTE R:123 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string9[] = "TESTE 9:%-4d:";
	letras = ft_printf(string9, -123);
	printf("\nTESTE R:-123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string10[] = "TESTE 10:%-5d:";
	letras = ft_printf(string10, -123);
	printf("\nTESTE 1R:-123 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string11[] = "TESTE 11:%-6d:";
	letras = ft_printf(string11, -123);
	printf("\nTESTE 1R:-123  :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string12[] = "TESTE 12:%03d:";
	letras = ft_printf(string12, 123);
	printf("\nTESTE 1R:123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string13[] = "TESTE 13:%04d:";
	letras = ft_printf(string13, 123);
	printf("\nTESTE 1R:0123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string14[] = "TESTE 14:%04d:";
	letras = ft_printf(string14, -123);
	printf("\nTESTE 1R:-123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string15[] = "TESTE 15:%05d:";
	letras = ft_printf(string15, -123);
	printf("\nTESTE 1R:-0123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string16[] = "TESTE 16:%06d:";
	letras = ft_printf(string16, -123);
	printf("\nTESTE 1R:-00123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string17[] = "TESTE 17:%-03d:";
	letras = ft_printf(string17, 123);
	printf("\nTESTE 1R:123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string18[] = "TESTE 18:%-04d:";
	letras = ft_printf(string18, 123);
	printf("\nTESTE 1R:123 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string19[] = "TESTE 19:%-04d:";
	letras = ft_printf(string19, -123);
	printf("\nTESTE 1R:-123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);


	char string20[] = "TESTE 20:%-05d:";
	letras = ft_printf(string20, -123);
	printf("\nTESTE 2R:-123 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string21[] = "TESTE 21:%-06d:";
	letras = ft_printf(string21, -123);
	printf("\nTESTE 2R:-123  :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string22[] = "TESTE 22:%3.d:";
	letras =ft_printf(string22, 777);
	printf("\nTESTE 2R:777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string23[] = "TESTE 23:%4.0d:";
	letras = ft_printf(string23, 777);
	printf("\nTESTE 2R: 777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string24[] = "TESTE 24:%4.3d:";
	letras = ft_printf(string24, -777);
	printf("\nTESTE 2R:-777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string25[] = "TESTE 25:%5.4d:";
	letras = ft_printf(string25, -777);
	printf("\nTESTE 2R:-0777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string26[] = "TESTE 26:%6.4d:";
	letras = ft_printf(string26, -777);
	printf("\nTESTE 2R: -0777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string27[] = "TESTE 27:%-3.5d:";
	letras =ft_printf(string27, 777);
	printf("\nTESTE 2R:00777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string28[] = "TESTE 28:%-5.4d:";
	letras =ft_printf(string28, 777);
	printf("\nTESTE 2R:0777 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string29[] = "TESTE 29:%-4.-7d:";
	letras = ft_printf(string29, -777);
	printf("\nTESTE 2R:-777   :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 17\n\n", letras);

	char string30[] = "TESTE 30:%-5.4-6d:";
	letras = ft_printf(string30, -777);
	printf("\nTESTE 3R:-0777 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string31[] = "TESTE 31:%-6....----.6-10d:";
	letras = ft_printf(string31, -777);
	printf("\nTESTE 3R:-000777   :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 20\n\n", letras);

	char string32[] = "TESTE 32:%03.3d:";
	letras = ft_printf(string32, 777);
	printf("\nTESTE 3R:777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string33[] = "TESTE 33:%06.5d:";
	letras = ft_printf(string33, 777);
	printf("\nTESTE 3R: 00777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string34[] = "TESTE 34:%04  ///&&  .5-8d:";
	letras = ft_printf(string34, -777);
	printf("\nTESTE 3R:-00777  :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 18\n\n", letras);

	char string35[] = "TESTE 35:%.7/////&&& & & &&10d:";
	letras = ft_printf(string35, -777);
	printf("\nTESTE 3R:  -0000777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 20\n\n", letras);

	char string36[] = "TESTE 36:%.7//////./////06d:";
	letras = ft_printf(string36, -777);
	printf("\nTESTE 3R:  -777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string37[] = "TESTE 37:%.7/////////.//-////  /////05d:";
	letras = ft_printf(string37, 777);
	printf("\nTESTE 3R:777  :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string38[] = "TESTE 38:%.5d:";
	letras = ft_printf(string38, 777);
	printf("\nTESTE 3R:00777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string39[] = "TESTE 39:%-.4/6d:";
	letras = ft_printf(string39, -777);
	printf("\nTESTE 3R:-0777 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string40[] = "TESTE 40:%.4/6d:";
	letras = ft_printf(string40, -777);
	printf("\nTESTE 4R: -0777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string41[] = "TESTE 41:%-06  \0.5d:";
	letras = ft_printf(string41, -777);
	printf("\nTESTE 4R:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 9\n\n", letras);

	char string42[] = "TESTE 42:%*d:";
	letras = ft_printf(string42, 3, 123);
	printf("\nTESTE 4R:123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string43[] = "TESTE 43:%*d:";
	letras = ft_printf(string43, 4, 123);
	printf("\nTESTE 4R: 123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string44[] = "TESTE 44:%*d:";
	letras = ft_printf(string44, 4, -123);
	printf("\nTESTE 4R:-123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string45[] = "TESTE 45:%*d:";
	letras = ft_printf(string45, 5, -123);
	printf("\nTESTE 4R: -123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string46[] = "TESTE 46:%*d:";
	letras = ft_printf(string46, 6, -123);
	printf("\nTESTE 4R:  -123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string47[] = "TESTE 47:%-*d:";
	letras = ft_printf(string47, 3, 123);
	printf("\nTESTE 4R:123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string48[] = "TESTE 48:%-*d:";
	letras = ft_printf(string48, 4, 123);
	printf("\nTESTE 4R:123 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string49[] = "TESTE 49:%-*d:";
	letras = ft_printf(string49, 4, -123);
	printf("\nTESTE 4R:-123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string50[] = "TESTE 50:%-*d:";
	letras = ft_printf(string50, 5, -123);
	printf("\nTESTE 5R:-123 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string51[] = "TESTE 51:%-*d:";
	letras = ft_printf(string51, 6, -123);
	printf("\nTESTE 5R:-123  :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string52[] = "TESTE 52:%0*d:";
	letras = ft_printf(string52, 3, 123);
	printf("\nTESTE 5R:123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string53[] = "TESTE 53:%0*d:";
	letras = ft_printf(string53, 4, 123);
	printf("\nTESTE 5R:0123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string54[] = "TESTE 54:%0*d:";
	letras = ft_printf(string54, 4, -123);
	printf("\nTESTE 5R:-123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string55[] = "TESTE 55:%0*d:";
	letras = ft_printf(string55, 5, -123);
	printf("\nTESTE 5R:-0123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string56[] = "TESTE 56:%0*d:";
	letras = ft_printf(string56, 6, -123);
	printf("\nTESTE 5R:-00123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string57[] = "TESTE 57:%-0*d:";
	letras = ft_printf(string57, 3, 123);
	printf("\nTESTE 5R:123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string58[] = "TESTE 58:%-0*d:";
	letras = ft_printf(string58, 4, 123);
	printf("\nTESTE 5R:123 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string59[] = "TESTE 59:%-0*d:";
	letras = ft_printf(string59, 4, -123);
	printf("\nTESTE 5R:-123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string60[] = "TESTE 60:%-0*d:";
	letras = ft_printf(string60, 5, -123);
	printf("\nTESTE 6R:-123 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string61[] = "TESTE 61:%-0*d:";
	letras = ft_printf(string61, 6, -123);
	printf("\nTESTE 6R:-123  :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string62[] = "TESTE 62:%*.d:";
	letras = ft_printf(string62, 3, 777);
	printf("\nTESTE 6R:777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string63[] = "TESTE 63:%*.0d:";
	letras = ft_printf(string63, 4, 777);
	printf("\nTESTE 6R: 777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string64[] = "TESTE 64:%*.*d:";
	letras = ft_printf(string64, 4, 3, -777);
	printf("\nTESTE 6R:-777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string65[] = "TESTE 65:%*.*d:";
	letras = ft_printf(string65, 5, 4, -777);
	printf("\nTESTE 6R:-0777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string66[] = "TESTE 66:%*.*d:";
	letras = ft_printf(string66, 6, 4, -777);
	printf("\nTESTE 6R: -0777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string67[] = "TESTE 67:%*.*d:";
	letras = ft_printf(string67, -3, 5, 777);
	printf("\nTESTE 6R:00777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string68[] = "TESTE 68:%*.*d:";
	letras = ft_printf(string68, -5, 4, 777);
	printf("\nTESTE 6R:0777 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string69[] = "TESTE 69:%*.*d:";
	letras = ft_printf(string69, -4, -7, -777);
	printf("\nTESTE 6R:-777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string70[] = "TESTE 70:%*.*-*d:";
	letras = ft_printf(string70, -5, 4, 6, -777);
	printf("\nTESTE 7R:-0777 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string71[] = "TESTE 71:%*....----.**d:";
	letras = ft_printf(string71, -6, 6, -10, -777);
	printf("\nTESTE 7R:-000777   :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 20\n\n", letras);

	char string72[] = "TESTE 72:%0*.*d:";
	letras = ft_printf(string72, 3, 3, 777);
	printf("\nTESTE 7R:777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string73[] = "TESTE 73:%0*.*d:";
	letras = ft_printf(string73, 6, 5, 777);
	printf("\nTESTE 7R: 00777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string74[] = "TESTE 74:%0*  ///&&  .**d:";
	letras = ft_printf(string74, 4, 5, -8, -777);
	printf("\nTESTE 7R:-00777  :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 18\n\n", letras);

	char string75[] = "TESTE 75:%.*/////&&& & & &&*d:";
	letras = ft_printf(string75, 7, 10, -777);
	printf("\nTESTE 7R:  -0000777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 20\n\n", letras);

	char string76[] = "TESTE 76:%.*//////./////0*d:";
	letras = ft_printf(string76, 7, 6, -777);
	printf("\nTESTE 7R:  -777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string77[] = "TESTE 77:%.*/////////.//-////  /////0*d:";
	letras = ft_printf(string77, 7, 5, 777);
	printf("\nTESTE 7R:777  :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string78[] = "TESTE 78:%.*d:";
	letras = ft_printf(string78, 5, 777);
	printf("\nTESTE 7R:00777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string79[] = "TESTE 79:%-.*/*d:";
	letras = ft_printf(string79, 4, 6, -777);
	printf("\nTESTE 7R:-0777 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string80[] = "TESTE 80:%.*/*d:";
	letras = ft_printf(string80, 4, 6, -777);
	printf("\nTESTE 8R: -0777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string81[] = "TESTE 81:%-0*  \0.5d:";
	letras = ft_printf(string81, 6, -777);
	printf("\nTESTE 8R:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 9\n\n", letras);


	ft_printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>TESTE PRINT PORCENTO<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
	char a = '%';
	letras = ft_printf("TESTE 01:%%:");
	printf("\nTESTE 0R:%c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 11\n\n", letras);

	letras = ft_printf("TESTE 02:%%%%:");
	printf("\nTESTE 0R:%c%c:", a, a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 12\n\n", letras);

	letras = ft_printf("TESTE 03:%%%: :%teste:");
	printf("\nTESTE 0R:%c%cteste:", a, a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 17\n\n", letras);

	letras = ft_printf("TESTE 04:%%%%: :%teste:");
	printf("\nTESTE 0R:%c%c: :este:", a, a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 19\n\n", letras);

	letras = ft_printf("TESTE 04:%1%:");
	printf("\nTESTE 0R:%c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 11\n\n", letras);

	letras = ft_printf("TESTE 05:%2%:");
	printf("\nTESTE 0R: %c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 12\n\n", letras);

	letras = ft_printf("TESTE 06:%3%:");
	printf("\nTESTE 0R:  %c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	letras = ft_printf("TESTE 07:%4%:");
	printf("\nTESTE 0R:   %c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	letras = ft_printf("TESTE 08:%01%:");
	printf("\nTESTE 0R:%c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 11\n\n", letras);

	letras = ft_printf("TESTE 09:%02%:");
	printf("\nTESTE 0R:0%c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 12\n\n", letras);

	letras = ft_printf("TESTE 10:%03%:");
	printf("\nTESTE 1R:00%c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	letras = ft_printf("TESTE 11:%04%:");
	printf("\nTESTE 1R:000%c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	letras = ft_printf("TESTE 12:%-01%:");
	printf("\nTESTE 1R:%c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 11\n\n", letras);

	letras = ft_printf("TESTE 13:%-02%:");
	printf("\nTESTE R1:%c :", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 12\n\n", letras);

	letras = ft_printf("TESTE 14:%-03%:");
	printf("\nTESTE R1:%c  :", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	letras = ft_printf("TESTE 15:%-04%:");
	printf("\nTESTE R1:%c   :", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	letras = ft_printf("TESTE 16:%1.20%:");
	printf("\nTESTE R1:%c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 11\n\n", letras);

	letras = ft_printf("TESTE 17:%2.20%:");
	printf("\nTESTE R1: %c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 12\n\n", letras);

	letras = ft_printf("TESTE 18:%3.20%:");
	printf("\nTESTE R1:  %c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	letras = ft_printf("TESTE 19:%4.20%:");
	printf("\nTESTE R1:   %c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	letras = ft_printf("TESTE 20:%.20 01%:");
	printf("\nTESTE R2:%c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 11\n\n", letras);

	letras = ft_printf("TESTE 21:%.20 02%:");
	printf("\nTESTE R2:0%c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 12\n\n", letras);

	letras = ft_printf("TESTE 22:%.20 03%:");
	printf("\nTESTE R2:00%c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	letras = ft_printf("TESTE 23:%.20 04%:");
	printf("\nTESTE R2:000%c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	letras = ft_printf("TESTE 23:%.20-01%:");
	printf("\nTESTE R2:%c:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 11\n\n", letras);

	letras = ft_printf("TESTE 24:%.20-02%:");
	printf("\nTESTE R2:%c :", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 12\n\n", letras);

	letras = ft_printf("TESTE 25:%.20-03%:");
	printf("\nTESTE R2:%c  :", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	letras = ft_printf("TESTE 26:%.20-04%:");
	printf("\nTESTE R2:%c   :", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	letras = ft_printf("TESTE 27:%04.20%: :%5i:", 3);
	printf("\nTESTE R2:000%c: :    3:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 22\n\n", letras);

	letras = ft_printf("TESTE 28:%7.4d: :%-04.20%: :%5i:", 3, 3);
	printf("\nTESTE R2:   0003: :%c   : :    3:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 32\n\n", letras);

	letras = ft_printf("TESTE 29:%-7.4d: :%04.20%: :%5i:", -3, 3);
	printf("\nTESTE R2:-0003  : :000%c: :    3:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 32\n\n", letras);

	letras = ft_printf("TESTE 30:%7.4d: :%-04.20%: :%5i:", -3, 3);
	printf("\nTESTE R3:  -0003: :%c   : :    3:", a);
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 32\n\n", letras);


	ft_printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>TESTE PRINT CHAR<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
	char ttt = 'A';

	letras = ft_printf("TESTE 01:%c:", ttt);
	printf("\nTESTE R0:A:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 11\n\n", letras);

	letras = ft_printf("TESTE 02:%2c:", ttt);
	printf("\nTESTE R0: A:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 12\n\n", letras);

	letras = ft_printf("TESTE 03:%3c:", ttt);
	printf("\nTESTE R0:  A:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	letras = ft_printf("TESTE 04:%4c:", ttt);
	printf("\nTESTE R0:   A:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	letras = ft_printf("TESTE 05:%-.20c:", ttt);
	printf("\nTESTE R0:A:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 11\n\n", letras);

	letras = ft_printf("TESTE 06:%-2.30c:", ttt);
	printf("\nTESTE R0:A :");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 12\n\n", letras);

	letras = ft_printf("TESTE 07:%-3.30c:", ttt);
	printf("\nTESTE R0:A  :");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	letras = ft_printf("TESTE 08:%-4.80c:", ttt);
	printf("\nTESTE R0:A   :");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	letras = ft_printf("TESTE 09:%c:", 0);
	printf("\nTESTE R0::");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 11\n\n", letras);

	letras = ft_printf("TESTE 10:%2c:", 0);
	printf("\nTESTE R1: :");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 12\n\n", letras);

	letras = ft_printf("TESTE 11:%3c:", 0);
	printf("\nTESTE R1:  :");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	letras = ft_printf("TESTE 12:%4c:", 0);
	printf("\nTESTE R1:   :");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	letras = ft_printf("TESTE 13:%c: :%5i:", ttt, -25);
	printf("\nTESTE R1:A: :  -25:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 19\n\n", letras);

	letras = ft_printf("TESTE 14:%.5d: :%2c:", -25, ttt);
	printf("\nTESTE R1:-00025: : A:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 21\n\n", letras);

	letras = ft_printf("TESTE 15:%*.5d: :%3c:", 8, -25, ttt);
	printf("\nTESTE R1:  -00025: :  A:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 24\n\n", letras);

	letras = ft_printf("TESTE 16:%4c: :%*.*d:", ttt, 10, 7, -25);
	printf("\nTESTE R1:   A: :  -0000025:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 27\n\n", letras);

	letras = ft_printf("TESTE 17:%c: :%5i: :%%:", ttt, -25);
	printf("\nTESTE R1:A: :  -25: :%%:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 23\n\n", letras);

	letras = ft_printf("TESTE 18:%5%: :%.5d: :%2c:", -25, ttt);
	printf("\nTESTE R1:    %%: :-00025: : A:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 29\n\n", letras);

	letras = ft_printf("TESTE 19:%*.5d: :%3c: :%08%:", 8, -25, ttt);
	printf("\nTESTE R1:  -00025: :  A: :0000000%%:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 35\n\n", letras);

	letras = ft_printf("TESTE 20:%4c: :%-*%: :%*.*d:", ttt, 8, 10, 7, -25);
	printf("\nTESTE R2:   A: :%%       : :  -0000025:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 38\n\n", letras);


	ft_printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>TESTE PRINT STRING<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
	char strin[] = "123456789";

	letras = ft_printf("TESTE 01:%s:", strin);
	printf("\nTESTE R0:123456789:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 19\n\n", letras);

	letras = ft_printf("TESTE 02:%11s:", strin);
	printf("\nTESTE R0:  123456789:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 21\n\n", letras);

	letras = ft_printf("TESTE 03:%-15s:", strin);
	printf("\nTESTE R0:123456789      :");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 25\n\n", letras);

	letras = ft_printf("TESTE 04:%5s:", strin);
	printf("\nTESTE R0:123456789:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 19\n\n", letras);

	letras = ft_printf("TESTE 05:%.s:", strin);
	printf("\nTESTE R0::");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 10\n\n", letras);

	letras = ft_printf("TESTE 06:%010.6s:", strin);
	printf("\nTESTE R0:0000123456:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 20\n\n", letras);

	letras = ft_printf("TESTE 07:%-5.3s:", strin);
	printf("\nTESTE R0:123  :");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	letras = ft_printf("TESTE 08:%7.0s:", strin);
	printf("\nTESTE R0:       :");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 17\n\n", letras);

	letras = ft_printf("TESTE 09:%////./////s:", strin);
	printf("\nTESTE R0::");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 10\n\n", letras);

	letras = ft_printf("TESTE 10:%6.*s:", 4, strin);
	printf("\nTESTE R1:  1234:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	letras = ft_printf("TESTE 11:%.*s:", 0, strin);
	printf("\nTESTE R1::");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 10\n\n", letras);

	letras = ft_printf("TESTE 12:%-*.2s:", 5, strin);
	printf("\nTESTE R1:12   :");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	letras = ft_printf("TESTE 13:%*.*s:", 1, 0, strin);
	printf("\nTESTE R1: :");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 11\n\n", letras);

	letras = ft_printf("TESTE 14:%6.*s:", -4, strin);
	printf("\nTESTE R1:123456789:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 19\n\n", letras);

	letras = ft_printf("TESTE 15:%*.8s:", -9, strin);
	printf("\nTESTE R1:12345678 :");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 19\n\n", letras);

	letras = ft_printf("TESTE 16:%*.*s:", 2, -20, strin);
	printf("\nTESTE R1:123456789:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 19\n\n", letras);

	letras = ft_printf("TESTE 17:%*....-....*s:", 8, 4, strin);
	printf("\nTESTE R1:1234    :");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 18\n\n", letras);

	letras = ft_printf("TESTE 18:%0*s:", 15, strin);
	printf("\nTESTE R1:000000123456789:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 25\n\n", letras);

	letras = ft_printf("TESTE 19:%000000000000020s:", strin);
	printf("\nTESTE R1:00000000000123456789:");
	printf("\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 30\n\n", letras);

	ft_printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>TESTE PRINT UNSIGNED INTEGER<<<<<<<<<<<<<<<<<<<<<<<<\n\n");


	char string1u[] = "TESTE 1:%u:";
	letras = ft_printf(string1u, 123);
	printf("\nTESTE R:123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 12\n\n", letras);

	char string2u[] = "TESTE 2:%3u:";
	letras = ft_printf(string2u, 123);
	printf("\nTESTE R:123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 12\n\n", letras);

	char string3u[] = "TESTE 3:%4u:";
	letras = ft_printf(string3u, 123);
	printf("\nTESTE R: 123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string4u[] = "TESTE 4:%10u:";
	letras = ft_printf(string4u, -1);
	printf("\nTESTE R:4294967295:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 19\n\n", letras);

	char string5u[] = "TESTE 5:%11u:";
	letras = ft_printf(string5u, -2);
	printf("\nTESTE R: 4294967294:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 20\n\n", letras);

	char string6u[] = "TESTE 6:%12u:";
	letras = ft_printf(string6u, -3);
	printf("\nTESTE R:  4294967293:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 21\n\n", letras);

	char string7u[] = "TESTE 7:%-3u:";
	letras = ft_printf(string7u, 123);
	printf("\nTESTE R:123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 12\n\n", letras);

	char string8u[] = "TESTE 8:%-4u:";
	letras = ft_printf(string8u, 123);
	printf("\nTESTE R:123 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string9u[] = "TESTE 9:%-10u:";
	letras = ft_printf(string9u, -10);
	printf("\nTESTE R:4294967286:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 19\n\n", letras);

	char string10u[] = "TESTE 10:%-11u:";
	letras = ft_printf(string10u, -1000);
	printf("\nTESTE 1R:4294966296 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 21\n\n", letras);

	char string11u[] = "TESTE 11:%-12u:";
	letras = ft_printf(string11u, -15);
	printf("\nTESTE 1R:4294967281  :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 22\n\n", letras);

	char string12u[] = "TESTE 12:%03u:";
	letras = ft_printf(string12u, 4294967296);
	printf("\nTESTE 1R:000:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string13u[] = "TESTE 13:%04u:";
	letras = ft_printf(string13u, 4294967297);
	printf("\nTESTE 1R:0001:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string14u[] = "TESTE 14:%011u:";
	letras = ft_printf(string14u, -1);
	printf("\nTESTE 1R:04294967295:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 21\n\n", letras);

	char string15u[] = "TESTE 15:%012u:";
	letras = ft_printf(string15u, -2);
	printf("\nTESTE 1R:004294967294:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 22\n\n", letras);

	char string16u[] = "TESTE 16:%013u:";
	letras = ft_printf(string16u, -3);
	printf("\nTESTE 1R:0004294967293:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 23\n\n", letras);

	char string17u[] = "TESTE 17:%-03u:";
	letras = ft_printf(string17u, 123);
	printf("\nTESTE 1R:123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string18u[] = "TESTE 18:%-04u:";
	letras = ft_printf(string18u, 123);
	printf("\nTESTE 1R:123 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string19u[] = "TESTE 19:%-011u:";
	letras = ft_printf(string19u, -1);
	printf("\nTESTE 1R:4294967295 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 21\n\n", letras);


	char string20u[] = "TESTE 20:%-012u:";
	letras = ft_printf(string20u, -20);
	printf("\nTESTE 2R:4294967276  :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 22\n\n", letras);

	char string21u[] = "TESTE 21:%-013u:";
	letras = ft_printf(string21u, -5);
	printf("\nTESTE 2R:4294967291   :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 23\n\n", letras);

	char string22u[] = "TESTE 22:%3.u:";
	letras =ft_printf(string22u, 777);
	printf("\nTESTE 2R:777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string23u[] = "TESTE 23:%4.0u:";
	letras = ft_printf(string23u, 777);
	printf("\nTESTE 2R: 777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string24u[] = "TESTE 24:%12.11u:";
	letras = ft_printf(string24u, -1);
	printf("\nTESTE 2R: 04294967295:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 22\n\n", letras);

	char string25u[] = "TESTE 25:%12.12u:";
	letras = ft_printf(string25u, -1);
	printf("\nTESTE 2R:004294967295:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 22\n\n", letras);

	char string26u[] = "TESTE 26:%14.4u:";
	letras = ft_printf(string26u, -777);
	printf("\nTESTE 2R:    4294967295:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 24\n\n", letras);

	char string27u[] = "TESTE 27:%-3.5u:";
	letras =ft_printf(string27u, 777);
	printf("\nTESTE 2R:00777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string28u[] = "TESTE 28:%-5.4u:";
	letras =ft_printf(string28u, 777);
	printf("\nTESTE 2R:0777 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string29u[] = "TESTE 29:%-4.-11u:";
	letras = ft_printf(string29u, -1);
	printf("\nTESTE 2R:4294967295 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 21\n\n", letras);

	char string30u[] = "TESTE 30:%-11.12-15u:";
	letras = ft_printf(string30u, -1);
	printf("\nTESTE 3R:004294967295   :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 25\n\n", letras);

	char string31u[] = "TESTE 31:%-20....----.18-10u:";
	letras = ft_printf(string31u, -1);
	printf("\nTESTE 3R:000000004294967295:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 28\n\n", letras);

	char string32u[] = "TESTE 32:%03.3u:";
	letras = ft_printf(string32u, 777);
	printf("\nTESTE 3R:777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string33u[] = "TESTE 33:%06.5u:";
	letras = ft_printf(string33u, 777);
	printf("\nTESTE 3R: 00777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string38u[] = "TESTE 38:%.5u:";
	letras = ft_printf(string38u, 777);
	printf("\nTESTE 3R:00777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string42u[] = "TESTE 42:%*u:";
	letras = ft_printf(string42u, 3, 123);
	printf("\nTESTE 4R:123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string43u[] = "TESTE 43:%*u:";
	letras = ft_printf(string43u, 4, 123);
	printf("\nTESTE 4R: 123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string44u[] = "TESTE 44:%*u:";
	letras = ft_printf(string44u, 10, -1);
	printf("\nTESTE 4R:4294967295:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 20\n\n", letras);

	char string45u[] = "TESTE 45:%*u:";
	letras = ft_printf(string45u, 11, -1);
	printf("\nTESTE 4R: 4294967295:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 21\n\n", letras);

	char string46u[] = "TESTE 46:%*u:";
	letras = ft_printf(string46u, 12, -1);
	printf("\nTESTE 4R:  4294967295:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 22\n\n", letras);

	char string47u[] = "TESTE 47:%-*u:";
	letras = ft_printf(string47u, 13, -1);
	printf("\nTESTE 4R:4294967295   :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 23\n\n", letras);

	char string48u[] = "TESTE 48:%-*u:";
	letras = ft_printf(string48u, 4, 123);
	printf("\nTESTE 4R:123 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string52u[] = "TESTE 52:%0*u:";
	letras = ft_printf(string52u, 3, 4294967297);
	printf("\nTESTE 5R:001:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string54u[] = "TESTE 54:%0*u:";
	letras = ft_printf(string54u, 13, -1);
	printf("\nTESTE 5R:0004294967295:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 23\n\n", letras);

	char string57u[] = "TESTE 57:%-0*u:";
	letras = ft_printf(string57u, 3, 123);
	printf("\nTESTE 5R:123:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string58u[] = "TESTE 58:%-0*u:";
	letras = ft_printf(string58u, 4, 123);
	printf("\nTESTE 5R:123 :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string59u[] = "TESTE 59:%-0*u:";
	letras = ft_printf(string59u, 12, -1);
	printf("\nTESTE 5R:4294967295  :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 22\n\n", letras);

	char string63u[] = "TESTE 63:%*.0u:";
	letras = ft_printf(string63u, 4, 777);
	printf("\nTESTE 6R: 777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 14\n\n", letras);

	char string64u[] = "TESTE 64:%*.*u:";
	letras = ft_printf(string64u, 22, 17, -1);
	printf("\nTESTE 6R:     00000004294967295:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 32\n\n", letras);

	char string72u[] = "TESTE 72:%0*.*d:";
	letras = ft_printf(string72u, 3, 3, 777);
	printf("\nTESTE 7R:777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 13\n\n", letras);

	char string73u[] = "TESTE 73:%0*.*d:";
	letras = ft_printf(string73u, 6, 5, 777);
	printf("\nTESTE 7R: 00777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 16\n\n", letras);

	char string77u[] = "TESTE 77:%.*/////////.//-////  /////0*d:";
	letras = ft_printf(string77u, 7, 5, 777);
	printf("\nTESTE 7R:777  :\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	char string78u[] = "TESTE 78:%.*d:";
	letras = ft_printf(string78u, 5, 777);
	printf("\nTESTE 7R:00777:\nQuantidade de letras retorna: %d\nQuantidade de letras correta: 15\n\n", letras);

	return (0);
}
