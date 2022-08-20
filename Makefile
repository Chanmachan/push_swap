NAME = push_swap

SRCS_DIR = ./srcs

OBJS_DIR = ./objs

SRCS_FILE = main.c push.c reverse_rotate.c rotate.c sort.c sorted.c \
		swap.c coordinate_compression.c exit.c atoi_plus.c

SRCS = $(addprefix $(SRCS_DIR)/,$(SRCS_FILE))

LIBFT = ./libft
PRINTF = ./ft_printf

INCLUDES = push_swap.h

OBJS = $(patsubst $(SRCS_DIR)/%, $(OBJS_DIR)/%, $(SRCS:.c=.o))

LIBFT_ARC = ./libft/libft.a

PRINTF_ARC = ./ft_printf/libftprintf.a

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJS)
		$(MAKE) -C $(PRINTF)
		$(CC) $(CFLAGS) $(OBJS) $(LIBFT_ARC) $(PRINTF_ARC) -o $(NAME)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
		mkdir -p $(OBJS_DIR)
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) -r $(OBJS_DIR)
		$(MAKE) -C $(LIBFT) clean
		$(MAKE) -C $(PRINTF) clean

fclean: clean
		$(MAKE) -C $(LIBFT) fclean
		$(MAKE) -C $(PRINTF) fclean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re