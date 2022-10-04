#include "../includes/push_swap.h"

int	sorted(t_stack *stack)
{
	size_t	n;

	n = 1;
	while (n < (size_t)stack->count_a)
	{
		if (stack->a[n - 1] > stack->a[n])
			return (1);
		n++;
	}
	return (0);
}
