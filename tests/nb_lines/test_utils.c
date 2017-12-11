/*
** EPITECH PROJECT, 2017
** nb_lines
** File description:
** test criterion
*/

#include <criterion/criterion.h>
#include "header_SOKOBAN.h"

Test(nb_lines, test1) {
	char map[6] = "#####\n";
	cr_assert_eq(nb_lines(map), 10);
}
