#include "push_swap.h"

size_t	strlen_plus(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

int	check_zero(const char *str, t_stack *stack)
{
	size_t	i;

	i = 0;
	if (str[i] == '0' && strlen_plus(str, ' ') > 1)
	{
		ft_printf("Error\n");
		free(stack->dup_a);
		exit_fail(stack);
	}
	return (0);
}

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\r' || \
			c == '\f' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	check_sign(char c)
{
	int		sign;

	sign = 1;
	if (c == '-')
		sign = -1;
	return (sign);
}

int	atoi_plus(const char *str, t_stack *stack)
{
	long long	ret;
	int			sign;
	size_t		i;

	ret = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = check_sign(str[i++]);
	check_zero(str, stack);
	if (!ft_isdigit(str[i]))
		exit_fail(stack);
	while (ft_isdigit(str[i]))
		ret = (ret * 10) + sign * (str[i++] - '0');
	if (ret > INT_MAX || ret < INT_MIN)
	{
		free(stack->dup_a);
		exit_fail(stack);
	}
	return ((int)ret);
}
