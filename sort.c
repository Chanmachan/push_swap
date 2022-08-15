#include "push_swap.h"

void	if_args_two(t_stack *stack)
{
	sa(stack);
}

//場合わけ
/*
 1 2 3
 1 3 2
 2 1 3
 2 3 1
 3 1 2
 3 2 1
 */

//void	if_args_three(t_stack *stack)
//{
//
//}

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


