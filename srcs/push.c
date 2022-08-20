#include "push_swap.h"

void	pa(t_stack *stack)
{
	size_t	n;
	size_t	m;

	if (stack->count_b == 0)
		return ;
	n = (size_t)stack->count_a;
	while (n--)
	{
		stack->a[n + 1] = stack->a[n];
	}
	stack->a[0] = stack->b[0];
	m = 0;
	while (m < (size_t)stack->count_b)
	{
		stack->b[m] = stack->b[m + 1];
		m++;
	}
	stack->count_a++;
	stack->count_b--;
	ft_printf("pa\n");
}

void	pb(t_stack *stack)
{
	size_t	n;
	size_t	m;

	if (stack->count_a == 0)
		return ;
	n = (size_t)stack->count_b;
	while (n--)
	{
		stack->b[n + 1] = stack->b[n];
	}
	stack->b[0] = stack->a[0];
	m = 0;
	while (m < (size_t)stack->count_a)
	{
		stack->a[m] = stack->a[m + 1];
		m++;
	}
	stack->count_a--;
	stack->count_b++;
	ft_printf("pb\n");
}
