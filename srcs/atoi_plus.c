#include "push_swap.h"

size_t	strlen_plus(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

int	check_zero(const char *str)
{
	size_t	i;

	i = 0;
	if (str[i] == '0' && strlen_plus(str, ' ') > 1)
	{
		ft_printf("Error\n");
		exit(EXIT_FAILURE);
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
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	check_zero(str);
	if (!ft_isdigit(str[i]))
		exit_fail(stack);
	while (ft_isdigit(str[i]))
	{
		ret = (ret * 10) + sign * (str[i] - '0');
		i++;
	}
	if (ret > INT_MAX || ret < INT_MIN)
		exit_fail(stack);
	return ((int)ret);
}
