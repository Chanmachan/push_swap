#include "push_swap.h"

void	init_argv(char **argv, t_stack *stack)
{
	size_t	n;
	size_t	count;

	stack->a = ft_calloc(stack->args + 1, sizeof(int));
	if (stack->a == NULL)
		return ;
	stack->b = ft_calloc(stack->args + 1, sizeof(int));
	if (stack->b == NULL)
		return ;
	n = 0;
	count = stack->args;
	while (count)
	{
		stack->a[n] = ft_atoi(argv[n + 1]);
		n++;
		count--;
	}
	return ;
}

void	set_start(t_stack *stack, int argc)
{
	stack->args = argc - 1;
	stack->a = NULL;
	stack->b = NULL;
	stack->count_a = argc - 1;
	stack->count_b = 0;
}