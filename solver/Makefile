##
## EPITECH PROJECT, 2023
## B-CPE-200-BDX-2-1-dante-elliot.masina
## File description:
## Makefile
##

SRC			=	src/main.c									\
				src/solving.c								\
				src/parse_file.c 							\
				src/error_cases.c 							\
				src/pathfinder.c 							\
				src/check_dir.c 							\
				src/find_weight.c 							\
				src/init.c 									\
				src/last_change_map.c 						\
				src/move.c 									\
				src/rewind.c  								\
				src/print_map.c 							\
				src/init_check.c 							\

NAME		=	solver

OBJ 		= 	$(SRC:.c=.o)

CFLAGS		=	-W -Wall -Wextra -I./include

LIB 		= 	-L./Lib/my -lmy

$(NAME):		$(OBJ)
				make -C Lib/my/
				gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LIB)

all:			$(NAME)

debug:			$(OBJ)
				make -C Lib/my/
				gcc -o $(NAME) $(OBJ) $(CFLAGS) -g3 $(LIB)

clean:
				make clean -C Lib/my/
				rm -rf $(OBJ)

fclean:			clean
				rm -rf $(NAME)

re:				fclean all

.PHONY: 		all debug clean fclean re
