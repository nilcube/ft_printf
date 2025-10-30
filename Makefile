CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes

NAME = libftprintf.a
SRCS = $(wildcard src/*.c)
OBJC = $(SRCS:.c=.o)

all: $(NAME)


$(NAME): $(OBJC)
	ar rsc $(NAME) $(OBJC)









.SECONDARY: $(OBJC)
.PHONY: all re clean fclean 
