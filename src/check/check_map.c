/*
** EPITECH PROJECT, 2017
** SOKOBAN_
** File description:
** check_map
*/

#include "my.h"

int	check_map(char *map)
{
	int player= 0;
	int boxes = 0;
	int hall = 0;
	int i = 0;

	while (map[i] != '\0') {
		switch (map[i]) {
			case 'P': player++;
				break;
			case 'X': boxes++;
				break;
			case 'O': hall++;
				break;
		}
		i++;
	}
	if (player != 1 || hall > boxes)
		return (84);
	else
		return (0);
}
