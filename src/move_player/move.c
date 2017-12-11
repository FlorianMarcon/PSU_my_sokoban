/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** move_up
*/

#include "my.h"
#include "header_SOKOBAN.h"
#include <stdlib.h>

void	move_up(char **map)
{
	position_t *position = search_player(map);
	char letter;

	switch (map[position->y - 1][position->x]) {
		case ' ': map[position->y - 1][position->x] = 'P';
			map[position->y][position->x] = ' ';
			break;
		case 'O': map[position->y - 1][position->x] = 'P';
			map[position->y][position->x] = ' ';
			break;
		case 'X': letter = map[position->y - 2][position->x];
			if (letter == ' ' || letter == 'O') {
				map[position->y - 2][position->x] = 'X';
				map[position->y - 1][position->x] = 'P';
				map[position->y][position->x] = ' ';
			}
	}
	free (position);
}

void	move_down(char **map)
{
	position_t *position = search_player(map);
	char letter;

	switch (map[position->y + 1][position->x]) {
		case ' ': map[position->y + 1][position->x] = 'P';
			map[position->y][position->x] = ' ';
			break;
		case 'O': map[position->y + 1][position->x] = 'P';
			map[position->y][position->x] = ' ';
			break;
		case 'X': letter = map[position->y + 2][position->x];
			if (letter == ' ' || letter == 'O') {
				map[position->y + 2][position->x] = 'X';
				map[position->y + 1][position->x] = 'P';
				map[position->y][position->x] = ' ';
			}
			break;
	}
	free (position);
}

void	move_right(char **map)
{
	position_t *position = search_player(map);
	char letter;

	switch (map[position->y][position->x + 1]) {
		case ' ': map[position->y][position->x + 1] = 'P';
			map[position->y][position->x] = ' ';
			break;
		case 'O': map[position->y][position->x + 1] = 'P';
			map[position->y][position->x] = ' ';
			break;
		case 'X': letter = map[position->y][position->x + 2];
			if (letter == ' ' || letter == 'O') {
				map[position->y][position->x + 2] = 'X';
				map[position->y][position->x + 1] = 'P';
				map[position->y][position->x] = ' ';
			}
			break;
	}
	free (position);
}

void	move_left(char **map)
{
	position_t *position = search_player(map);
	char letter;

	switch (map[position->y][position->x - 1]) {
		case ' ': map[position->y][position->x - 1] = 'P';
			map[position->y][position->x] = ' ';
			break;
		case 'O': map[position->y][position->x - 1] = 'P';
			map[position->y][position->x] = ' ';
			break;
		case 'X': letter = map[position->y][position->x - 2];
			if (letter == ' ' || letter == 'O') {
				map[position->y][position->x - 2] = 'X';
				map[position->y][position->x - 1] = 'P';
				map[position->y][position->x] = ' ';
			}
			break;
	}
	free (position);
}
