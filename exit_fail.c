#include "push_swap.h"

void	all_free(t_stack *stack)
{
	stack->a[0] = 0;
}

void	exit_fail(t_stack *stack)
{
	all_free(stack);
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}