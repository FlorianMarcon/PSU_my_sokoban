/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** display_storage
*/

#include "my.h"
#include "header_SOKOBAN.h"

void	display_storage(char **map, linked_list_t *storage)
{
	position_t *position = NULL;

	while (storage != NULL) {
		position = (position_t *)storage->data;
		if (map[position->y][position->x] == ' ')
			map[position->y][position->x] = 'O';
		storage = storage->next;
		}
}
