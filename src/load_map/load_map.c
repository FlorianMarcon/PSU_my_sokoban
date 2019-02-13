/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** load_map
*/

#include "my.h"
#include "header_SOKOBAN.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int	open_file(char *path)
{
	int fd = 0;

	if ((fd = open(path, O_RDONLY)) == -1)
		exit (84);
	return (fd);
}

char	*read_map(int fd)
{
	char *map = NULL;
	char *buffer = NULL;

	if ((map = malloc(sizeof(char) * 4097)) == NULL)
		exit (84);
	if ((buffer = malloc(sizeof(char) * 4097)) == NULL)
		exit (84);
	if (read(fd, map, 4096) < 0)
		exit (84);
	while (read(fd, buffer, 4096) > 0)
		map = my_strcat(map, buffer);
	return (map);
}
char	*load_map(char *path)
{
	int fd = open_file(path);
	char *map = read_map(fd);

	return (map);
}
