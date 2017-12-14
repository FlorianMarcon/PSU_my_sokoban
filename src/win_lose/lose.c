/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** lose.c
*/

#include "my.h"
#include "header_SOKOBAN.h"

int	condition_to_lose(char **map, int size_hall)
{
	int nb_boxes = analyse_nb_boxe(map);
	int nb_boxes_stoped = analyse_nb_boxe_blocked(map);
	if (nb_boxes - nb_boxes_stoped < size_hall)
		return (1);
	return (0);
}
