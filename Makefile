##
## EPITECH PROJECT, 2026
## Cesar
## File description:
## The main compiler for the cesar project
##

CC = epiclang

NAME = cesar

SRC = \
	src/main.c	\
	src/handlers/encrypt/encrypt_handler.c	\
	src/utils/my_char_is_alpha.c	\
	src/handlers/encrypt/encrypt_negative_char.c	\
	src/handlers/encrypt/encrypt_positive_char.c	\
	src/handlers/file/read_file.c	\
	src/handlers/file/write_into_file.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Iinclude -g

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean	all

