#include "push_swap.h"

static int	check_dup(t_stack *stack)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < (size_t)stack->args)
	{
		j = i + 1;
		while (j < (size_t)stack->args)
		{
			if (stack->a[i] == stack->a[j])
			{
				exit_fail(stack);
			}
			j++;
		}
		i++;
	}
	return (0);
}

static void	all_malloc(t_stack *stack)
{
	stack->a = ft_calloc(stack->args, sizeof(t_stack));
	if (stack->a == NULL)
		return ;
	stack->b = ft_calloc(stack->args, sizeof(t_stack));
	if (stack->b == NULL)
		return ;
	stack->dup_a = ft_calloc(stack->args, sizeof(t_stack));
	if (stack->dup_a == NULL)
		return ;
}

static void	init_argv(char **argv, t_stack *stack)
{
	size_t	n;
	size_t	count;

	all_malloc(stack);
	n = 0;
	count = stack->args;
	while (count)
	{
		stack->a[n] = atoi_plus(argv[n + 1], stack);
		stack->dup_a[n] = atoi_plus(argv[n + 1], stack);
		n++;
		count--;
	}
}

static void	set_start(t_stack *stack, int argc)
{
	stack->args = argc - 1;
	stack->a = NULL;
	stack->b = NULL;
	stack->dup_a = NULL;
	stack->count_a = argc - 1;
	stack->count_b = 0;
}

int	main(int argc, char **argv)
{
	t_stack	stack;

	if (argc == 1)
		return (0);
	set_start(&stack, argc);
	init_argv(argv, &stack);
	if (sorted(&stack) == 0)
		exit (EXIT_SUCCESS);
	check_dup(&stack);
	sort_args(&stack);
	return (0);
}

//	system("leaks -q a.out");

//int	main(int argc, char **argv)
//{
//	t_stack	stack;
////	size_t n;
////	int tmp;
//
//	if (argc == 1)
//		return (0);
//	set_start(&stack, argc);
//	init_argv(argv, &stack);
//	if (sorted(&stack) == 0)
//		exit (EXIT_SUCCESS);
//	check_dup(&stack);
////	tmp = stack.args;
////	n = 0;
////	while (tmp--)
////	{
////		printf("\t%d\n", stack.a[n]);
////		n++;
////	}
////	printf("--------------\n");
//	sort_args(&stack);
////	n = 0;
////	while (stack.args--)
////	{
////		printf("\ta[%zu] = %d\n", n, stack.a[n]);
////		n++;
////	}
////	system("leaks -q a.out");
//	return (0);
//}

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