##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## EPITECH Project Makefile for map generator
##

SRC_MAIN 		= 	main.c

SRC_TEST 		=	units_tests/test.c

SRC				=	src/generator/generate.c			\
					src/error/error.c 					\
					src/error/check_arg.c 				\
					src/generator/fill_struct.c			\
					src/generator/maze.c				\
					src/prints/print_error.c 			\
					src/prints/print_map.c 				\
					src/utils/free_all.c 				\
					src/utils/malloc_map.c

OBJ 			= 	$(SRC_MAIN:.c=.o) 					\
					$(SRC:.c=.o)

OBJ_TEST		= 	$(SRC:.c=.o)						\
					$(SRC_TEST:.c=.o)

CFLAGS 			= 	-W -Wall -Wextra -I./include

FLAGS_DEBUG 	= 	-g3

FLAGS_TEST1 	=	--coverage -lcriterion

FLAGS_TEST2		=	--coverage

NAME 			= 	generator

NAME_TEST		= 	unit_tests

$(NAME):			$(OBJ)
					gcc -o $(NAME) $(OBJ) $(CFLAGS)
					rm -rf $(OBJ)

all:				$(NAME)

debug: 				CFLAGS += $(FLAGS_DEBUG)

debug:				$(OBJ)
					gcc -o $(NAME) $(OBJ) $(CFLAGS)
					rm -rf $(OBJ)

clean:
					rm -rf $(NAME)

clean_test:
					rm -rf $(NAME_TEST)
					rm -rf src/*.gcda src/*.gcno
					rm -rf src/error/*.gcda src/error/*.gcno
					rm -rf src/generator/*.gcda src/generator/*.gcno
					rm -rf src/prints/*.gcda src/prints/*.gcno
					rm -rf src/utils/*.gcda src/utils/*.gcno
					rm -rf units_tests/*.gcda units_tests/*.gcno

fclean:				clean clean_test

tests_run: 			CFLAGS += $(FLAGS_TEST2)

tests_run: 			$(OBJ_TEST)
					gcc -o $(NAME_TEST) $(OBJ_TEST) $(FLAGS_TEST1)
					rm -rf $(OBJ_TEST)
					./unit_tests --verbose

re:					fclean all

.PHONY:				all debug clean clean_test fclean tests_run re
