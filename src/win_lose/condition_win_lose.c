/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** condition_win_lose
*/

#include "my.h"
#include "header_SOKOBAN.h"

int	condition_win_lose(char **map, linked_list_t *storage)
{
	int size_hall = len_list(storage);

	if (condition_to_win(map, storage) == 1)
		return (0);
	if (condition_to_lose(map, size_hall) == 1)
		return (1);
	return (-1);
}
