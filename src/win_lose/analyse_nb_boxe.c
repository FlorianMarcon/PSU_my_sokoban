/*
** EPITECH PROJECT, 2017
** sokoban
** File description:
** analyse_nb_boxe
*/

#include "my.h"
#include "header_SOKOBAN.h"

int	analyse_side_blocked(char **map, int x, int y)
{
	int result = 0;

	result += analyse_right_top(map, x, y);
	result += analyse_right_bottom(map, x, y);
	result += analyse_left_top(map, x, y);
	result += analyse_left_bottom(map, x, y);
	if (result > 0)
		return (1);
	else
		return (0);
}

int	is_boxe(char **map, int x, int y)
{
	int result = -1;

	if (map[y][x] == 'X')
		result = analyse_side_blocked(map, x, y);
	return (result);
}

int	analyse_nb_boxe(char **map)
{
	int x = 0;
	int y = 0;
	int nb_boxe = 0;

	while (map[y] != NULL) {
		x = 0;
		while (map[y][x] != '\0') {
			if (map[y][x] == 'X')
				nb_boxe++;
			x++;
		}
		y++;
	}
	return (nb_boxe);
}

int	analyse_nb_boxe_blocked(char **map)
{
	int x = 0;
	int y = 0;
	int nb_boxe_blocked = 0;

	while (map[y] != NULL) {
		x = 0;
		while (map[y][x] != '\0') {
			if (is_boxe(map, x, y) == 1)
				nb_boxe_blocked++;
			x++;
		}
		y++;
	}
	return (nb_boxe_blocked);
}
