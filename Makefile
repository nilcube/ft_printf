CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes

NAME = libftprintf.a
SRCS = $(wildcard src/*.c)
OBJC = $(SRCS:.c=.o)

all: $(NAME)


$(NAME): $(OBJC)
	ar rsc $(NAME) $(OBJC)



clean:
	rm -f $(OBJC)

fclean: clean
	rm -f $(NAME)

test: $(NAME)
	$(CC) -Iincludes test.c $(NAME) -o test

re: fclean all

.SECONDARY: $(OBJC)
.PHONY: all re clean fclean 
