# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -Ilibft

# Directories and libraries
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
NAME = libftprintf.a
SRC = ft_printf.c ft_print_char.c \
      ft_print_str.c ft_print_signed_int.c ft_print_unsigned_int.c \
      ft_print_ptr.c ft_print_hex.c ft_utoa.c
OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
