/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** lose.c
*/

#include "my.h"
#include "header_SOKOBAN.h"

int	analyse_top_bottom(char **map, int x, int y)
{
	int result = 0;

	if (map[y + 1][x] == '#')
		result++;
	if (map[y - 1][x] == '#')
		result++;
	return (result);
}

int	analyse_right_left(char **map, int x, int y)
{
	int result = 0;

	if (map[y][x + 1] == '#')
		result++;
	if (map[y][x - 1] == '#')
		result++;
	return (result);
}
int	analyse_boxe(char **map, int x, int y)
{
	int result = 0;

	result += analyse_right_left(map, x, y);
	result += analyse_top_bottom(map, x, y);
	if (result >= 2)
		return (1);
	else
		return (0);
}

int	condition_to_lose(char **map)
{
	int x = 0;
	int y = 0;

	while (map[y] != NULL) {
		x = 0;
		while (map[y][x] != '\0') {
			if (map[y][x] == 'X')
				if (analyse_boxe(map, x, y) == 1)
					return (1);
			x++;
		}
		y++;
	}
	return (0);
}
