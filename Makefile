##
## EPITECH PROJECT, 2026
## Cesar
## File description:
## The main compiler for the cesar project
##

CC = epiclang

NAME = cesar

SRC = \
	src/main.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Iinclude

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean	all

