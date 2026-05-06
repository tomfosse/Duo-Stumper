##
## EPITECH PROJECT, 2026
## Cesar
## File description:
## The main compiler for the cesar project
##

CC = epiclang

NAME = cesar

SRC =	\
	src/main.c
OBJ = $(SRC:.c=.o)

CLFAGS = -g -Wall -Wextra -Iinclude

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

all:	$(NAME)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean	all
