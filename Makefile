NAME = push_swap

SRCS_DIR = ./srcs

OBJS_DIR = ./objs

SRCS_FILE = main.c push.c reverse_rotate.c rotate.c sort.c sorted.c \
		swap.c coordinate_compression.c exit.c atoi_plus.c

SRCS = $(addprefix $(SRCS_DIR)/,$(SRCS_FILE))

PRINTF_DIR = ./ft_printf

INCLUDES = ./includes/push_swap.h

OBJS = $(patsubst $(SRCS_DIR)/%, $(OBJS_DIR)/%, $(SRCS:.c=.o))

LIBFT = ./libft/libft.a

LIBPRINTF = ./ft_printf/libftprintf.a

CFLAGS = -Wall -Wextra -Werror
#-MP -MMD

all: $(NAME)

$(NAME) : $(OBJS)
		$(MAKE) -C $(PRINTF_DIR)
		$(CC) $(CFLAGS) $^ -o $(NAME) $(LIBPRINTF) $(LIBFT)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
		mkdir -p $(OBJS_DIR)
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) -r $(OBJS_DIR)
		$(MAKE) -C $(PRINTF_DIR) clean

fclean: clean
		$(MAKE) -C $(PRINTF_DIR) fclean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
