#include "push_swap.h"

void	if_a_three(t_stack *stack)
{
	if (stack->count_a == 2)
		return ;
	if (stack->a[0] < stack->a[2] && stack->a[2] < stack->a[1])
	{
		rra(stack);
		sa(stack);
	}
	else if (stack->a[1] < stack->a[0] && stack->a[0] < stack->a[2])
		sa(stack);
	else if (stack->a[2] < stack->a[0] && stack->a[0] < stack->a[1])
		rra(stack);
	else if (stack->a[1] < stack->a[2] && stack->a[2] < stack->a[0])
		ra(stack);
	else if (stack->a[2] < stack->a[1] && stack->a[1] < stack->a[0])
	{
		sa(stack);
		rra(stack);
	}
}

void	if_b_three(t_stack *stack)
{
	if (stack->b[0] < stack->b[1] && stack->b[1] < stack->b[2])
	{
		sb(stack);
		rrb(stack);
	}
	if (stack->b[0] < stack->b[2] && stack->b[2] < stack->b[1])
		rb(stack);
	if (stack->b[1] < stack->b[0] && stack->b[0] < stack->b[2])
		rrb(stack);
	if (stack->b[2] < stack->b[0] && stack->b[0] < stack->b[1])
		sb(stack);
	if (stack->b[1] < stack->b[2] && stack->b[2] < stack->b[0])
	{
		sb(stack);
		rb(stack);
	}
}

void	if_a_less_six(t_stack *stack)
{
	size_t	count;

	count = 0;
	while (count < (size_t)stack->args)
	{
		if (stack->a[0] <= 2)
		{
			pb(stack);
		}
		else
		{
			ra(stack);
		}
		count++;
	}
	if (stack->a[0] > stack->a[1])
		sa(stack);
	if_a_three(stack);
	if_b_three(stack);
	while (stack->count_b)
	{
		pa(stack);
	}
}

void	if_others(t_stack *stack)
{
	size_t	i;
	size_t	j;
	size_t	digit;
	size_t	count;

	i = 0;
	digit = 0;
	while (i++ < (size_t)stack->args)
	{
		count = 0;
		while (count++ < (size_t)stack->args)
		{
			if ((stack->a[0] >> digit & 1) == 1)
				ra(stack);
			else if
			((stack->a[0] >> digit & 1) == 0)
				pb(stack);
		}
		j = (size_t)stack->count_b;
		while (j--)
			pa(stack);
		if (sorted(stack) == 0)
			return ;
		digit++;
	}
}

void	sort_args(t_stack *stack)
{
	ccompression(stack);
	if (stack->args == 2)
		sa(stack);
	else if (stack->args == 3)
		if_a_three(stack);
	else if (stack->args <= 6)
		if_a_less_six(stack);
	else
		if_others(stack);
}
