/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** main
*/

#include "my.h"
#include "header_SOKOBAN.h"

int	main(int ac, char **av)
{
	check_argu(av[1], ac);
	if (ac == 2) {
		return (my_sokoban(av[1]));
	}
	else
		return (84);
}
