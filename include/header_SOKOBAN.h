/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** header
*/

#include <ncurses.h>

#ifndef SOKOBAN_
#define SOKOBAN_

typedef struct position {
	int x;
	int y;
}position_t;

int	analyse_right_bottom(char **map, int x, int y);

int	analyse_right_top(char **map, int x, int y);

int	analyse_left_top(char **map, int x, int y);

int	analyse_left_bottom(char **map, int x, int y);

int	condition_to_lose(char **map, int size_hall);

int	condition_win_lose(char **map, linked_list_t *storage);

linked_list_t	*list_storage(char **map);

int	condition_to_win(char **map, linked_list_t *storage);

void	display_storage(char **map, linked_list_t *storage);

void	move_up(char **map);

void	move_down(char **map);

void	move_right(char **map);

void	move_left(char **map);

int	action(WINDOW *win, char **map);

void	display_map(WINDOW *window, char **map);

char	**stock_in_2d(char *str);

int	my_sokoban(char *path);

char	*load_map(char *path);

position_t	*search_player(char **map);

int	check_map(char *map);

void	check_argu(char *str, int ac);

#endif
