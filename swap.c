#include "push_swap.h"

static void	swap_a(t_stack *stack)
{
	int	tmp;

	if (stack->count_a == 1)
		return ;
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
}

static void	swap_b(t_stack *stack)
{
	int	tmp;

	if (stack->count_b == 1)
		return ;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
}

void	sa(t_stack *stack)
{
	if (stack->count_a < 2)
		return ;
	swap_a(stack);
	ft_printf("sa\n");
	return ;
}

void	sb(t_stack *stack)
{
	if (stack->count_b < 2)
		return ;
	swap_b(stack);
	ft_printf("sb\n");
	return ;
}

void	ss(t_stack *stack)
{
	if (stack->count_a < 2 && stack->count_b < 2)
		return;
	swap_a(stack);
	swap_b(stack);
	ft_printf("ss\n");
}