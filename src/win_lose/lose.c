/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** lose.c
*/

#include "my.h"
#include "header_SOKOBAN.h"

int	analyse_boxe(char **map, int x, int y)
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

int	condition_to_lose(char **map)
{
	int x = 0;
	int y = 0;
	int nb_boxes = 0;
	int nb_boxes_stoped = 0;

	while (map[y] != NULL) {
		x = 0;
		while (map[y][x] != '\0') {
			if (map[y][x] == 'X') {
				nb_boxes++;
				if (analyse_boxe(map, x, y) == 1)
					nb_boxes_stoped++;
			}
			x++;
		}
		y++;
	}
	if (nb_boxes == nb_boxes_stoped)
		return (1);
	return (0);
}
