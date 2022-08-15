#include "push_swap.h"

//座標圧縮する関数

void	ccompression(t_stack *stack)
{
	int		*array;
	int		tmp;
	size_t	n;

	array = ft_calloc(stack->args, sizeof(t_stack));
	n = 0;
	while (n < stack->args)
	{
		if (array[n] > array[n + 1])
		{
			tmp = array[n];
			array[n] = array[n + 1];
			array[n + 1] = tmp;
		}
		n++;
	}
}

int main(void)
{
	ccompression()
}

/*
12 34 5 66 54 1
 3  4 2  6  5 1

1 2  3  4  5  6
1 5 12 34 54 66
*/