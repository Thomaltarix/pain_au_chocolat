##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## A Universal Makefile.
##

# PARAM
PROGNAME		=		gameoflife
SRC				=		src/main.c					\
						src/error_handling.c		\
						src/game_of_life.c			\
						src/setup_struct.c			\
						src/readfile.c				\
						src/my_putstr.c				\
						src/my_strlen.c				\
						src/my_str_to_word_array.c	\
						src/my_show_array.c			\
						src/my_getnbr.c				\
						src/my_is_in_array.c		\
						src/my_isnum.c				\
						src/my_strcat.c				\
						src/my_strcmp.c				\
						src/my_strcpy.c				\
						src/my_strdup.c

# MAKEFILE
WARNING			=		-W -Wall -Wextra -Wshadow -Werror

INCLUDE_DIR 	=		-I ./include
CFLAGS			=                  $(INCLUDE_DIR) $(WARNING)
OBJ				=		$(SRC:.c=.o)
CC				=		gcc -g

VG				=		vgcore*
TESTS			=		tests/main_test.c

all:	$(PROGNAME)

$(PROGNAME):	$(OBJ)
		$(CC) $(OBJ) -o $(PROGNAME) $(CFLAGS)

clean:
		@rm -rf $(OBJ)

fclean:			clean
		@rm -rf $(PROGNAME)

re:		fclean 	$(PROGNAME)

debug :
		$(CC) $(SRC) -g -o $(PROGNAME)
		rm -rf $(OBJ)

valgrind : re
		$(CC) $(OBJ) -g -o $(PROGNAME)
		valgrind --leak-check=full --show-leak-kinds=all ./$(PROGNAME)

vg:
		rm $(VG)

tests_run:
		rm -rf unit_tests

