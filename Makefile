# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smahraz <smahraz@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/04 20:51:32 by smahraz           #+#    #+#              #
#    Updated: 2025/11/04 20:51:34 by smahraz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -I.

NAME = libftprintf.a
SRCS = src/ft_parse.c src/ft_printf.c src/ft_putchar.c src/ft_puthex.c src/ft_putnbr.c src/ft_putstr_null.c src/ft_utils.c
OBJC = $(SRCS:.c=.o)


all: $(NAME)


$(NAME): $(OBJC) ft_printf.h
	ar rsc $(NAME) $(OBJC)


clean:
	rm -f $(OBJC)

fclean: clean
	rm -f $(NAME)


re: fclean all

.SECONDARY: $(OBJC)
.PHONY: all re clean fclean 
