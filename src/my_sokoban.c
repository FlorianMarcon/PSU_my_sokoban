/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** main sokoban
*/

#include "my.h"
#include "header_SOKOBAN.h"
#include <stdlib.h>
#include <ncurses.h>

void	loop_window(char **map, linked_list_t *storage)
{
	WINDOW *win;
	int var = 0;

	initscr();
	win = newwin(LINES, COLS, 0, 0);
	while (var != KEY_DC) {
		display_map(win, map);
		var = action(win, map);
		display_storage(map, storage);
		wclear(win);
	}
	endwin();
}

int	my_sokoban(char *path)
{
	char *str = load_map(path);
	char **map = stock_in_2d(str);
	linked_list_t *storage = list_storage(map);

	loop_window(map, storage);
	return (0);
}
