##
## EPITECH PROJECT, 2017
## my_sokoban
## File description:
## Makefile
##

CC	=	gcc

SRC	=	src/list_storage/list_storage.c		\
		src/action/key_action.c		\
		src/move_player/move.c	\
		src/check/check_argu.c	\
		src/check/check_map.c	\
		src/load_map/load_map.c		\
		src/my_sokoban.c		\
		src/search_player/search_player.c	\
		src/load_map/stock_in_2d.c		\
		src/display/display_map.c		\
		src/display/display_storage.c		\
		src/win_lose/win.c		\
		src/win_lose/lose.c		\
		src/win_lose/condition_win_lose.c	\
		src/win_lose/analyse_lose.c		\
		src/win_lose/analyse_nb_boxe.c		\

SRC_UT	=	tests/search_player/tests_utils.c		\

SRC_MAIN	=	src/main.c	\

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

OBJ_UT	=	$(SRC_UT:.c=.o)

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

CFLAGS	=	-W -Wall -Wextra -Werror -I./include

LDFLAGS	=	-lncurses -lcriterion --coverage

LIB	=	-L./lib/my/ -lmy

all:	$(OBJ_MAIN) $(OBJ)
	make -C./lib/my
	$(CC) -o $(NAME) $(OBJ_MAIN) $(OBJ) $(LDFLAGS) $(LIB)

clean:
	make clean -C./lib/my/
	rm -f $(OBJ_MAIN)
	rm -f $(OBJ)
	rm -f $(OBJ_UT)

fclean:	clean
	rm $(NAME)
	make fclean -C./lib/my/

re:	clean	all

tests_run:	$(OBJ) $(OBJ_UT)
	make -C./lib/my
	$(CC) -o units $(OBJ) $(OBJ_UT) $(LDFLAGS) $(LIB)
	`./units`
