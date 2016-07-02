##
## Makefile for  in /home/courne_l/rendu/synthese/sbml/SBMLparser
## 
## Made by courneil lucasc
## Login   <courne_l@epitech.net>
## 
## Started on  Tue Jun 14 09:41:55 2016 courneil lucasc
## Last update Sat Jun 18 12:30:53 2016 courneil lucasc
##

NAME	= palindrome

CC	= clang -g -W -Wall -Wextra

CFLAGS  = -I./include/

SRCS	= main.c \
	  srcs/my_strlen.c \
	  srcs/my_putstr.c \
	  srcs/my_putchar.c \
	  srcs/base_calc.c \
	  srcs/iteration.c \
	  srcs/check_flag.c \
	  srcs/help.c \
	  srcs/aff.c \
	  srcs/isdigitstr.c \
	  srcs/convertbase.c \
	  srcs/add_base.c \
	  srcs/my_malloc.c \
	  srcs/my_exit.c

OBJ	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
