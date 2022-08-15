#include "push_swap.h"

void	if_args_two(t_stack *stack)
{
	sa(stack);
}

//場合わけ
/*
 1 2 3 //sortedで完了済み
 1 3 2 rra sa
 2 1 3 sa
 2 3 1 rra
 3 1 2 ra
 3 2 1 sa rra
 */

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
	return;
}

//基数ソートだと要素が２個とか３個のときに例外的に処理しないといけない
void	check_args(t_stack *stack)
{
	if (stack->args == 2)
		if_args_two(stack);
	if (stack->args == 3)
		if_args_three(stack);
}

//バブルソートで座標圧縮をする


//座標圧縮をして二進数表記する


//二進数の一桁目が'1'だった場合raで下に持っていく


//'0'がきたらpb


//分け終わったらpaで元に戻す


//次の桁に進んで'0'だったらpb


//'1'だったらraを繰り返す


