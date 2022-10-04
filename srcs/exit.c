#include "../includes/push_swap.h"

void	all_free(t_stack *stack)
{
	free(stack->a);
	free(stack->b);
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
