#include "push_swap.h"

static void	reverse_rotate_a(t_stack *stack)
{
	int		tmp;
	size_t	count;

	if (stack->count_a < 2)
		return;
	count = stack->count_a;
	tmp = stack->a[stack->count_a - 1];
	while (--count)
	{
		stack->a[count] = stack->a[count - 1];
	}
	stack->a[0] = tmp;
}

static void	reverse_rotate_b(t_stack *stack)
{
	int		tmp;
	size_t	count;

	if (stack->count_b < 2)
		return;
	count = stack->count_b;
	tmp = stack->b[stack->count_b - 1];
	while (--count)
	{
		stack->b[count] = stack->b[count - 1];
	}
	stack->b[0] = tmp;
}

void	rra(t_stack *stack)
{
	if (stack->count_a < 2)
		return;
	reverse_rotate_a(stack);
	ft_printf("rra\n");
	return ;
}

void	rrb(t_stack *stack)
{
	if (stack->count_b < 2)
		return;
	reverse_rotate_b(stack);
	ft_printf("rrb\n");
	return ;
}

void	rrr(t_stack *stack)
{
	if (stack->count_a < 2 && stack->count_b < 2)
		return;
	reverse_rotate_a(stack);
	reverse_rotate_b(stack);
	ft_printf("rrr\n");
	return ;
}