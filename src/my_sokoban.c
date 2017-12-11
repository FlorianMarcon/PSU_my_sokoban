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

void	loop_window(char **map)
{
	WINDOW *win;
	int var = 0;

	initscr();
	win = newwin(LINES, COLS, 0, 0);
	while (var != KEY_DC) {
		display_map(win, map);
		keypad(win, 1);
		var = wgetch(win);
		wrefresh(win);
	}
	endwin();
}

int	my_sokoban(char *path)
{
	char *str = load_map(path);
	char **map = stock_in_2d(str);

	loop_window(map);
	return (0);
}
