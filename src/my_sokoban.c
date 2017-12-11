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
		if (condition_win_lose(map, storage) != -1) {
			endwin();
			return (condition_win_lose(map, storage));
		}
		var = action(win, map);
		display_storage(map, storage);
		wrefresh(win);
	}
	endwin();
	return (2);
}

int	my_sokoban(char *path)
{
	char *str = load_map(path);
	char **map = stock_in_2d(str);
	linked_list_t *storage = list_storage(map);
	int result = loop_window(map, storage);

	return (result);
}
