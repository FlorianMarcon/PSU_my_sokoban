/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** search_player
*/

#include "my.h"
#include "header_SOKOBAN.h"
#include <stdlib.h>

int	check_all_symbole(char letter)
{
	switch (letter) {
		case 'X': return (1);
		case 'P': return (1);
		case 'O': return (1);
		case '#': return (1);
		case ' ': return (1);
	}
	return (0);
}

position_t	*search_player(char **map)
{
	int x = 0;
	int y = 0;
	position_t *position = NULL;

	if ((position = malloc(sizeof(position_t))) == NULL)
		exit (84);
	while (map[y][x] != 'P') {
		x++;
		if (map[y][x] == '\0') {
			x = 0;
			y++;
		}
	}
	position->x = x;
	position->y = y;
	return (position);
}
