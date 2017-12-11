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

int	loop_window(char **map, linked_list_t *storage)
{
	WINDOW *win;
	int var = 0;

	initscr();
	win = newwin(LINES, COLS, 0, 0);
	while (var != KEY_DC) {
		display_map(win, map);
		if (condition_to_win(map, storage) == 1) {
			endwin();
			return (0);
		}
		if (condition_to_lose(map) == 1) {
			endwin();
			return (1);
		}
		var = action(win, map);
		display_storage(map, storage);
		wrefresh(win);
	}
	endwin();
	return (0);
}

int	my_sokoban(char *path)
{
	char *str = load_map(path);
	char **map = stock_in_2d(str);
	linked_list_t *storage = list_storage(map);

	return (loop_window(map, storage));
}
