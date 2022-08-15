#include "push_swap.h"

static void	init_argv(char **argv, t_stack *stack)
{
	size_t	n;
	size_t	count;

	stack->a = ft_calloc(stack->args, sizeof(t_stack));
	if (stack->a == NULL)
		return ;
	stack->b = ft_calloc(stack->args, sizeof(t_stack));
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

static void	set_start(t_stack *stack, int argc)
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

	set_start(&stack, argc);
	init_argv(argv, &stack);
	set_start(&stack, argc);
	init_argv(argv, &stack);
	if (sorted(&stack) == 1)
	{
		return (0);
	}

	return (0);
}

//check commands
/*
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
	free(stack.a);
	free(stack.b);
//	system("leaks -q a.out");
	return (0);
}*/