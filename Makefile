##
## EPITECH PROJECT, 2017
## my_sokoban
## File description:
## Makefile
##

CC	=	gcc

SRC	=	src/check_argu/check_argu.c	\
		src/load_map/load_map.c		\
		src/my_sokoban.c		\
		src/search_player/search_player.c	\
		src/load_map/stock_in_2d.c		\
		src/display_map/display_map.c		\

SRC_UT	=	tests/nb_lines/test_utils.c		\

SRC_MAIN	=	src/main.c	\

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

OBJ_UT	=	$(SRC_UT:.c=.o)

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

CFLAGS	=	-W -Wall -Wextra -Werror -I./include

LDFLAGS	=	-lncurses -lcriterion

LIB	=	-L./lib/my/ -lmy

all:	$(OBJ_MAIN) $(OBJ)
	make -C./lib/my
	$(CC) -o $(NAME) $(OBJ_MAIN) $(OBJ) $(LDFLAGS) $(LIB)

clean:
	make clean -C./lib/my/
	rm -f *.o
	rm -f *#
	rm -f *~
	rm -f src/*.o
	rm -f src/*#
	rm -f src/*~
	rm -f src/check_argu/*.o
	rm -f src/check_argu/*#
	rm -f src/check_argu/*~
	rm -f src/search_player/*.o
	rm -f src/search_player/*#
	rm -f src/search_player/*~
	rm -f src/load_map/*.o
	rm -f src/load_map/*#
	rm -f src/load_map/*~
	rm -f src/display_map/*.o
	rm -f src/display_map/*~
	rm -f src/display_map/*#
	rm -f tests/nb_lines/*.o
	rm -f tests/nb_lines/*~
	rm -f tests/nb_lines/*#

fclean:	clean
	rm $(NAME)
	make fclean -C.lib/my/

re:	clean	all

tests_run:	$(OBJ) $(OBJ_UT)
	$(CC) -o units $(LDFLAGS) $(LIB)
