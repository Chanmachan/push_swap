#include "push_swap.h"

void	all_free(t_stack *stack)
{
	if (stack->a != NULL)
		free(stack->a);
	if (stack->b != NULL)
		free(stack->b);
	if (stack->dup_a != NULL)
		free(stack->dup_a);
}

void	exit_fail(t_stack *stack)
{
	all_free(stack);
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

void	exit_success(t_stack *stack)
{
	all_free(stack);
	exit(EXIT_SUCCESS);
}