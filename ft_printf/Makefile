NAME = libftprintf.a

SRCS = ft_printf.c if_conv.c put_conv_base.c put_func.c

LIBFT = ../libft

INCLUDES = ft_printf.h

OBJS = $(SRCS:.c=.o)

LIBFT_ARC = ../libft/libft.a

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
		$(MAKE) -C $(LIBFT)
		ar rcs $(NAME) $(OBJS) $(LIBFT_ARC)

all:	$(NAME)

clean:
		$(RM) $(OBJS)
		$(MAKE) -C $(LIBFT) clean

fclean:	clean
		$(RM) $(NAME)
		$(MAKE) -C $(LIBFT) fclean

re:		fclean all

.PHONY:	all clean fclean re

#test:\
	./test.sh\
\
printf:\
	gcc ft_printf.c if_conv.c put_func.c put_conv_base.c -D TEST -o printf\
\
ft_printf:\
	gcc ft_printf.c if_conv.c put_func.c put_conv_base.c -D TEST -D FT_PRINTF -o ft_printf\
\
clean:\
	rm -rf printf ft_printf\
