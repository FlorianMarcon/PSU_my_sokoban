/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** display_map
*/

#include "my.h"
#include "header_SOKOBAN.h"
#include <ncurses.h>
#include <stdlib.h>

void	display_map(WINDOW *window, char **map)
{
	int i = 0;

	while (map[i]!= NULL) {
		mvwprintw(window, i, 0, map[i]);
		i++;
	}
}
