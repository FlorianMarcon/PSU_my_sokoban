/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** action
*/

#include "my.h"
#include "header_SOKOBAN.h"

int	action(WINDOW *win, char ** map)
{
	int var = 0;

	keypad(win, 1);
	var = wgetch(win);
	switch (var) {
		case KEY_UP:
			move_up(map);
			break;
		case KEY_DOWN:
			move_down(map);
			break;
		case KEY_RIGHT:
			move_right(map);
			break;
		case KEY_LEFT:
			move_left(map);
			break;
	}
	return (var);
}
