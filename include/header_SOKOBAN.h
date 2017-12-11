/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** header
*/

#include <ncurses.h>

#ifndef SOKOBAN_
#define SOKOBAN_

void	display_map(WINDOW *window, char **map);

char	**stock_in_2d(char *str);

int	my_sokoban(char *path);

char	*load_map(char *path);

int	search_player(char *map);

void	check_argu(char *str);

#endif
