#include "../includes/push_swap.h"

void	ccompression(t_stack *stack)
{
	size_t	i;
	size_t	n;
	size_t	m;

	n = 0;
	while (n < (size_t)stack->count_a)
	{
		i = 0;
		m = 0;
		while (m < (size_t)stack->count_a)
		{
			if (stack->dup_a[n] > stack->dup_a[m])
				i++;
			m++;
		}
		stack->a[n] = (int)i;
		n++;
	}
	free(stack->dup_a);
}
