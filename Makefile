##
## Makefile for bsq in /home/sayyou_y/rendu/PSU-System-Unix/PSU_2014_my_select
## 
## Made by Youssef Sayyouri
## Login   <sayyou_y@epitech.net>
## 
## Started on  Tue Dec 16 11:46:07 2014 Youssef Sayyouri
## Last update Tue Feb 10 18:48:32 2015 Youssef Sayyouri
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall -Werror
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -I.

NAME	= bsq

SRCS	= main.c		\
	  my_func.c		\
	  tab_func.c		\
	  get_next_line.c	\
	  print_error.c		\

OBJS	= $(SRCS:.c=.o)

all	: $(NAME)

$(NAME)	: $(OBJS)
	  $(CC) $(OBJS) -o $(NAME) $(CFLAGS)

clean	:
	  $(RM) $(OBJS)

fclean	: clean
	  $(RM) $(NAME)

re	: fclean all

.PHONY	: all clean flcean re
