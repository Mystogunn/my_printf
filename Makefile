##
## Makefile for Makefile in /home/Mystogun/exopis
## 
## Made by Josselin COSMAO
## Login   <Mystogun@epitech.net>
## 
## Started on  Sat Oct 15 16:46:52 2016 Josselin COSMAO
## Last update Sun Nov 20 23:08:08 2016 Josselin Cosmao
##

CC	= gcc -c

RM	= rm -rf

NAME	= libmy.a

AR	= ar rc

SRCS	= disp_pourcent.c \
	disp_s.c \
	disp_di.c \
	disp_c.c \
	my_strlen.c \
	disp_up_s.c \
	my_put_nbr_octa.c \
	my_put_nbr_adress.c \
	my_put_nbr_hexa.c \
	my_put_nbr_up_hexa.c \
	my_put_nbr_u.c \
	my_put_nbr_bin.c \
	my_printf.c \
	my_putstr.c \
	my_put_nbr.c \
	my_putchar.c

OBJS	= $(SRCS:.c=.o)

CFLAGS	= -Werror -Wextra -Wall -ansi -pedantic -Iinclude/

all:	$(NAME)

$(NAME): $(OBJS)
	 $(AR) $(NAME) $(OBJS)

$(0):	$(CC) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
