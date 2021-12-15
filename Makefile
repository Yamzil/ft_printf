# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 21:23:16 by yamzil            #+#    #+#              #
#    Updated: 2021/12/15 18:53:28 by yamzil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c \
	  ft_putchar.c \
	  ft_puthexalow.c \
	  ft_puthexaupper.c \
	  ft_putnbr.c \
	  ft_putstr.c \
	  ft_putun.c \
	  ft_putcent.c \

CFLAGS = -Wall -Werror -Wextra

CC = gcc

all :$(NAME) 

OBJ = $(SRC:.c=.o) 

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all
	  