/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** stock in 2d
*/

#include "my.h"
#include "header_SOKOBAN.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	size_line(const char *str)
{
	int size = 0;

	while (str[size] != '\n' && str[size] != '\0')
		size++;
	return (size);
}

int	nb_lines(const char *str)
{
	int i = 0;
	int size = 0;

	while (str[i] != '\0') {
		if (str[i] == '\n')
			size++;
		i++;
	}
	if (str[i - 1] != '\n')
		size++;
	return (size);
}

char	**stock_in_2d(char *str)
{
	int i = 0;
	char **map = NULL;
	int size = 0;
	int lines = 0;

	if ((map = malloc(sizeof(char *) * (nb_lines(str) + 1))) == NULL)
		exit (84);
	while (str[i] != '\0') {
		size = size_line(&str[i]);
		if ((map[lines] = malloc(sizeof(char) * (size + 1))) == NULL)
			exit (84);
		my_strncpy(map[lines], &str[i], size);
		i = i + size + 1;
		lines++;
	}
	map[i] = NULL;
	free (str);
	return (map);
}
