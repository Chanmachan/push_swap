NAME = push_swap

SRCS = main.c push.c reverse_rotate.c rotate.c sort.c sorted.c \
		swap.c coordinate_compression.c exit.c atoi_plus.c

LIBFT = ./libft
PRINTF = ./ft_printf

INCLUDES = push_swap.h

OBJS = $(SRCS:.c=.o)

LIBFT_ARC = ./libft/libft.a

PRINTF_ARC = ./ft_printf/libftprintf.a

CFLAGS = -Wall -Wextra -Werror

$(NAME) : $(OBJS)
		$(MAKE) -C $(LIBFT)
		$(MAKE) -C $(PRINTF)
		cc $(CFLAGS) $(OBJS) $(LIBFT_ARC) $(PRINTF_ARC) -o $(NAME)

all: $(NAME)

clean:
		rm -rf $(OBJS)
		$(MAKE) -C $(LIBFT) clean
		$(MAKE) -C $(PRINTF) clean

fclean: clean
		rm -rf $(OBJS)
		$(MAKE) -C $(LIBFT) fclean
		$(MAKE) -C $(PRINTF) fclean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re