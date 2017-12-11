/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** list_storage
*/

#include "my.h"
#include "header_SOKOBAN.h"
#include <stdlib.h>

void	create_new(linked_list_t *list, int y, int x)
{
	position_t *position = NULL;

	if ((position = malloc(sizeof(position_t))) == NULL)
		exit (84);
	position->x = x;
	position->y = y;
	create_node(list, position);
}

void	search_storage(char **map, int x, int y, linked_list_t *list)
{
	while (map[y][x] != '\0') {
		if (map[y][x] == 'O')
			create_new(list, y, x);
		x++;
	}
}
linked_list_t	*list_storage(char **map)
{
	linked_list_t *list = NULL;
	int x = 0;
	int y = 0;

	if ((list = malloc(sizeof(linked_list_t))) == NULL)
		exit (84);
	list->next = NULL;
	while (map[y] != NULL) {
		search_storage(map, x, y, list);
		y++;
	}
	list = list->next;
	return (list);
}
