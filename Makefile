##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

NAME		=	libmy_malloc.so

SRC_DIR		=	src/

INC			=	-I./include

CPPFLAGS	=	$(INC)

CFLAGS		=	-Wall -Wextra

LIB_ALLOC	=	-L -lmy_my_malloc

BRANCH		=	--branches

EXCLUD		=	--exclude

GCOVR		=	gcovr

OBJ			=	$(SRC:.c=.o)

SRC        	=	$(SRC_DIR)malloc.c			\
			    $(SRC_DIR)check_size.c		\
			    $(SRC_DIR)best_fit.c		\
			    $(SRC_DIR)calloc.c			\
			    $(SRC_DIR)realloc.c			\
			    $(SRC_DIR)reallocarray.c	\
			    $(SRC_DIR)free.c			\

all:
	gcc $(SRC) -shared -fPIC -o $(NAME) $(INC)

db:		all
	$(CC) main.c $(LIB_ALLOC) $(INC) -Wall -Wextra
	LD_PRELOAD=libmy_malloc.so	ls -Rla

clean:
	$(RM) $(OBJ) *gc*

fclean:    clean
	$(RM) $(NAME) a.out

re:    fclean all

.PHONY:         all fclean re

#include <stdio.h>