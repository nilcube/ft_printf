CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes

NAME = libftprintf.a
SRCS = src/ft_parse.c src/ft_printf.c src/ft_putchar.c src/ft_puthex.c src/ft_putnbr.c src/ft_putstr.c src/ft_utils.c
OBJC = $(SRCS:.c=.o)


all: $(NAME)


$(NAME): $(OBJC) includes/ft_printf.h
	ar rsc $(NAME) $(OBJC)


clean:
	rm -f $(OBJC)

fclean: clean
	rm -f $(NAME)


re: fclean all

.SECONDARY: $(OBJC)
.PHONY: all re clean fclean 
