#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	size_t	i;
	i = 1;
	if (argc > 1)
	{
		while (--argc > 0)
		{
			ft_printf("%s\n", argv[i]);
			i++;
		}
	}
	else
		ft_printf("Error\n");
	return (0);
}