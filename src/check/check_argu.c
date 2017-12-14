/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** check_argu.c
*/

#include "my.h"
#include <stdlib.h>

void	display_help(void)
{
	my_printf("USAGE\n	./my_sokoban map\n");
	my_printf("DESCRIPTION\n	map file ");
	my_printf("representing the warehouse map, containing '#'");
	my_printf(" for walls,\n	'P' for the player, 'X' for");
	my_printf(" boxes and 'O' for storage locations.\n");
	exit (0);
}

void	display_no_argu(void)
{
	my_printf("Re-try with '-h'\n");
	exit (84);
}

void	check_argu(char *str, int ac)
{
	if (ac != 2)
		display_no_argu();
	else
		if (my_strcmp(str, "-h") == 0)
			display_help();
}
