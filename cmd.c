#include "push_swap.h"
#include <stdio.h>

typedef struct s_stack
{
	int args;
	int	*a;
	int	*b;
	int count_a;
	int count_b;
} t_stack;

void pb(t_stack *stack)
{
	//そもそも要素が１、０の場合はこの条件に入らないようにする
	/*if ()*/
	size_t	n;
	size_t	m;

	n = 0;
	n = (size_t)stack->count_b;
	while (n--)
	{
		stack->b[n + 1] = stack->b[n];
	}
	stack->b[0] = stack->a[0];
	m = 0;
	while (m < (size_t)stack->args && m < (size_t)stack->count_a)
	{
		stack->a[m] = stack->a[m + 1];
		m++;
	}
	stack->count_a--;
	stack->count_b++;
	ft_printf("pb\n");
	return ;
}

void pa(t_stack *stack)
{
	//そもそも要素が１、０の場合はこの条件に入らないようにする
	/*if ()*/
	size_t	n;
	size_t	m;

	n = (size_t)stack->count_a;
	while (n--)
	{
		stack->a[n + 1] = stack->a[n];
	}
	stack->a[0] = stack->b[0];
	m = 0;
	while (m < (size_t)stack->args && m < (size_t)stack->count_b)
	{
		stack->b[m] = stack->b[m + 1];
		m++;
	}
	stack->count_a++;
	stack->count_b--;
	ft_printf("pa\n");
	return ;
}

void	sa(t_stack *stack)
{
	int	tmp;

	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	ft_printf("sa\n");
	return ;
}

void	sb(t_stack *stack)
{
	int	tmp;

	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	ft_printf("sb\n");
	return ;
}

void	init_argv(char **argv, t_stack *stack)
{
	size_t	n;
	size_t	count;

	stack->a = (int *) malloc(sizeof(int) * stack->args);
	if (stack->a == NULL)
	{
		printf("malloc error\n");
		return ;
	}
	stack->b = (int *) malloc(sizeof(int) * stack->args);
	if (stack->b == NULL)
	{
		printf("malloc error\n");
		return ;
	}
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

int	main(int argc, char **argv)
{
	t_stack	stack;
	size_t	n;
	size_t	tmp;

	tmp = argc;
	set_start(&stack, argc);
	init_argv(argv, &stack);
	n = 0;
	printf("***start***\n");
	while (--tmp)
	{
		ft_printf("%d | %d\n", stack.a[n], stack.b[n]);
		n++;
	}
	printf("-----------\n");
	pb(&stack);
	n = 0;
	tmp = argc;
	while (--tmp)
	{
		ft_printf("%d | %d\n", stack.a[n], stack.b[n]);
		n++;
	}
	printf("-----------\n");
	pb(&stack);
	n = 0;
	tmp = argc;
	while (--tmp)
	{
		ft_printf("%d | %d\n", stack.a[n], stack.b[n]);
		n++;
	}
	printf("-----------\n");
	pa(&stack);
	n = 0;
	tmp = argc;
	while (--tmp)
	{
		ft_printf("%d | %d\n", stack.a[n], stack.b[n]);
		n++;
	}
	printf("-----------\n");
	sa(&stack);
	n = 0;
	tmp = argc;
	while (--tmp)
	{
		ft_printf("%d | %d\n", stack.a[n], stack.b[n]);
		n++;
	}
	printf("-----------\n");
	pb(&stack);
	n = 0;
	tmp = argc;
	while (--tmp)
	{
		ft_printf("%d | %d\n", stack.a[n], stack.b[n]);
		n++;
	}
	printf("-----------\n");
	sb(&stack);
	n = 0;
	tmp = argc;
	while (--tmp)
	{
		ft_printf("%d | %d\n", stack.a[n], stack.b[n]);
		n++;
	}
	printf("-----------\n");
	free(stack.a);
	free(stack.b);
//	system("leaks -q a.out");
	return (0);
}