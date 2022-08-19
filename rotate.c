#include "push_swap.h"

static void	rotate_a(t_stack *stack)
{
	int		tmp;
	size_t	count;
	size_t	n;

	count = stack->count_a;
	tmp = stack->a[0];
	n = 0;
	while (count--)
	{
		stack->a[n] = stack->a[n + 1];
		n++;
	}
	stack->a[stack->count_a - 1] = tmp;
}

static void	rotate_b(t_stack *stack)
{
	int		tmp;
	size_t	count;
	size_t	n;

	count = stack->count_b;
	tmp = stack->b[0];
	n = 0;
	while (count--)
	{
		stack->b[n] = stack->b[n + 1];
		n++;
	}
	stack->b[stack->count_b - 1] = tmp;
}

void	ra(t_stack *stack)
{
	rotate_a(stack);
	ft_printf("ra\n");
}

void	rb(t_stack *stack)
{
	rotate_b(stack);
	ft_printf("rb\n");
}

void	rr(t_stack *stack)
{
	rotate_a(stack);
	rotate_b(stack);
	ft_printf("rr\n");
}
