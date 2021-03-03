##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile for antman
##

NAME    =	palindrome

SRC     =	main.c		\
		my_palin.c

OBJ     =       $(SRC:.c=.o)

CC      =       gcc

CFLAGS  =       -g -W -Wall -Wextra -I./include

all:    $(NAME)

$(NAME):        $(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all
