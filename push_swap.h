#ifndef PUSH_SWAP_PUSH_SWAP_H
#define PUSH_SWAP_PUSH_SWAP_H

#include "libft/libft.h"
#include "ft_printf/ft_printf.h"
#include <stdio.h>

typedef struct s_stack
{
	int args;
	int	*a;
	int	*b;
	int	*dup_a;
	int count_a;
	int count_b;
} t_stack;

//swap
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);
//rotate
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);
//push
void	pa(t_stack *stack);
void	pb(t_stack *stack);
//reverse_rotate
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);
//sorted
int	sorted(t_stack *stack);
//sort
void	sort_args(t_stack *stack);
//coordinate_compression
void	ccompression(t_stack *stack);
//atoi_plus
int atoi_plus(const char *str, t_stack *stack);
//exit_fail
void	exit_fail(t_stack *stack);

#endif
