#include "push_swap.h"

//座標圧縮する関数

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

//int main(void)
//{
//	t_stack stack;
//	stack.args = 3;
//	size_t i = 0;
//	while (i < (size_t)stack.args)
//	{
//		printf("%d\n", (ccompression(&stack))[i]);
//		i++;
//	}
//}

/*
12 34 5 66 54 1
 3  4 2  6  5 1

1 2  3  4  5  6
1 5 12 34 54 66
*/