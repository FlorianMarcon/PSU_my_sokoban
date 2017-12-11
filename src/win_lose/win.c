/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** condition to win
*/

#include "my.h"
#include "header_SOKOBAN.h"

int	condition_to_win(char **map, linked_list_t *storage)
{
	position_t *position = NULL;

	while (storage != NULL) {
		position = (position_t *)storage->data;
		if (map[position->y][position->x] != 'X')
			return (0);
		storage = storage->next;
	}
	return (1);
}
