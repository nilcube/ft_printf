CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)




clean:
	$(MAKE) clean -C $(LIBFT_DIR)


fclean:
	$(MAKE) fclean -C $(LIBFT_DIR)


.PHONY: all re clean fclean 
