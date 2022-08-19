NAME = push_swap

SRCS = main.c push.c reverse_rotate.c rotate.c sort.c sorted.c \
		swap.c coordinate_compression.c exit.c atoi_plus.c

LIBFT = ./libft
PRINTF = ./ft_printf

INCLUDES = push_swap.h

OBJS = $(SRCS:.c=.o)

LIBFT_OBJS = ./libft/ft_atoi.o ./libft/ft_bzero.o ./libft/ft_isalnum.o ./libft/ft_isalpha.o ./libft/ft_isascii.o ./libft/ft_isdigit.o \
             	./libft/ft_isprint.o ./libft/ft_itoa.o ./libft/ft_memchr.o ./libft/ft_memcmp.o ./libft/ft_memcpy.o ./libft/ft_memmove.o ./libft/ft_memset.o \
             	./libft/ft_split.o ./libft/ft_strchr.o ./libft/ft_strjoin.o ./libft/ft_strlcat.o ./libft/ft_strlcpy.o ./libft/ft_strlen.o \
             	./libft/ft_strncmp.o ./libft/ft_strnstr.o ./libft/ft_strrchr.o ./libft/ft_strtrim.o ./libft/ft_substr.o ./libft/ft_tolower.o ./libft/ft_toupper.o \
             	./libft/ft_strdup.o ./libft/ft_calloc.o ./libft/ft_strmapi.o ./libft/ft_striteri.o ./libft/ft_putchar_fd.o ./libft/ft_putstr_fd.o \
             	./libft/ft_putendl_fd.o ./libft/ft_putnbr_fd.o

PRINTF_OBJS = ./ft_printf/ft_printf.o ./ft_printf/if_conv.o ./ft_printf/put_conv_base.o ./ft_printf/put_func.o

 CFLAGS = -Wall -Wextra -Werror

 $(NAME) : $(OBJS)
		$(MAKE) -C $(LIBFT)
		$(MAKE) -C $(PRINTF)
		gcc $(CFLAGS) $(OBJS) $(LIBFT_OBJS) $(PRINTF_OBJS) -o $(NAME)

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