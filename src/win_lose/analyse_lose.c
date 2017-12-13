/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** analyse_lose
*/

int	analyse_right_top(char **map, int x, int y)
{
	if (map[y][x + 1] == '#' && map[y - 1][x]  == '#')
		return (1);
	else
		return (0);
}

int	analyse_right_bottom(char **map, int x, int y)
{
	if (map[y][x + 1] == '#' && map[y + 1][x]  == '#')
		return (1);
	else
		return (0);
}

int	analyse_left_top(char **map, int x, int y)
{
	if (map[y][x - 1] == '#' && map[y - 1][x]  == '#')
		return (1);
	else
		return (0);
}
int	analyse_left_bottom(char **map, int x, int y)
{
	if (map[y][x - 1] == '#' && map[y + 1][x]  == '#')
		return (1);
	else
		return (0);
}
