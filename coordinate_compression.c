#include "push_swap.h"

//座標圧縮する関数

void	ccompression(t_stack *stack)
{
	int		tmp;
	size_t	n;
	size_t	i;

	i = 0;
	while (i < (size_t)stack->args - 1)
	{
		n = 0;
		while (n < (size_t) stack->args - 1)
		{
			if (stack->bit_a[n] > stack->bit_a[n + 1])
			{
				tmp = stack->bit_a[n];
				stack->bit_a[n] = stack->bit_a[n + 1];
				stack->bit_a[n + 1] = tmp;
			}
			n++;
		}
		i++;
	}
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