#include "push_swap.h"
#include <stdio.h>

typedef struct s_stack
{
	int	*a;
	int	*b;
} t_stack;

/*void *pb()
{
	while ()
	return ;
}*/

void	init_argv(int argc, char **argv, t_stack *stack)
{
	size_t	n;

	stack->a = (int *) malloc(sizeof(int) * argc - 1);
	if (stack.a == NULL)
		return ;
	n = 0;
	while (argc - 1)
	{
		stack->a[n] = ft_atoi(argv[n + 1]);
		n++;
		argc--;
	}
}

void	set_start(t_stack *stack)
{
	stack->a = NULL;
	stack->b = NULL;
}

int	main(int argc, char **argv)
{
	t_stack	stack;
	size_t	n;

	set_start(&stack);
	init_argv(argc, argv, &stack);
//	pb();
	n = 0;
	while (--argc)
	{
		ft_printf("%d\n", stack.a[n]);
		printf("n : %zu\n", n);
		n++;
	}
	free(stack.a);
	return (0);
}