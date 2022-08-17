#include "push_swap.h"

void	if_args_three(t_stack *stack)
{
	if (stack->a[0] < stack->a[2] && stack->a[2] < stack->a[1])
	{
		rra(stack);
		sa(stack);
	}
	else if (stack->a[1] < stack->a[0] && stack->a[0] < stack->a[2])
		sa(stack);
	else if (stack->a[3] < stack->a[0] && stack->a[0] < stack->a[1])
		rra(stack);
	else if (stack->a[1] < stack->a[2] && stack->a[2] < stack->a[0])
		ra(stack);
	else if (stack->a[2] < stack->a[1] && stack->a[1] < stack->a[0])
	{
		sa(stack);
		rra(stack);
	}
}

//void	if_args_four_five(t_stack *stack)
//{
//
//}

void	if_others(t_stack *stack)
{
	size_t	i;
	size_t	j;
	size_t	digit;
	size_t	count;

	ccompression(stack);
	i = 1;
	digit = 0;
	while (i < (size_t)stack->args)
	{
		count = 0;
		while (count++ < (size_t)stack->args)
		{
			if ((stack->a[0] >> digit & 1) == 1)
				ra(stack);
			else if
			((stack->a[0] >> digit & 1) == 0)
				pb(stack);
		}
		j = (size_t)stack->count_b;
		while (j--)
			pa(stack);
		digit++;
		i++;
	}
}

//基数ソートだと要素が２個とか３個のときに例外的に処理しないといけない
void	sort_args(t_stack *stack)
{
	if (stack->args == 2)
		sa(stack);
	else if (stack->args == 3)
		if_args_three(stack);
//	else if (stack->args == 4 || stack->args == 5)
//		if_args_four_five(stack);
	else
		if_others(stack);
}

//バブルソートで座標圧縮をする
//座標圧縮をして二進数表記する
//二進数の一桁目が'1'だった場合raで下に持っていく
//'0'がきたらpb
//分け終わったらpaで元に戻す
//次の桁に進んで'0'だったらpb
//'1'だったらraを繰り返す


