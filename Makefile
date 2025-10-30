CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes

NAME = libftprintf.a
SRCS = $(wildcard src/*.c) $(wildcard src/*/*.c)
OBJC = $(SRCS:.c=.o)

all: $(NAME)


$(NAME): $(OBJC) includes/ft_printf.h
	ar rsc $(NAME) $(OBJC)



clean:
	rm -f $(OBJC)

fclean: clean
	rm -f $(NAME)

test: $(NAME) test.c
	$(CC) -Iincludes test.c $(NAME) -o test

re: fclean all

.SECONDARY: $(OBJC)
.PHONY: all re clean fclean 
