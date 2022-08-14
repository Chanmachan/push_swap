#ifndef PUSH_SWAP_PUSH_SWAP_H
#define PUSH_SWAP_PUSH_SWAP_H

#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

typedef struct s_stack
{
	int args;
	int	*a;
	int	*b;
	int count_a;
	int count_b;
} t_stack;

void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);

#endif
