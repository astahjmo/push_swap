/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:49:03 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/05 21:44:23 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	push(t_stack *stack_x, t_stack *stack_y, char *instruction)
{
	int	temp;
	int	idx;

	if (!stack_x->top)
		return ;
	idx = stack_x->top->index;
	temp = stack_x->top->value;
	pop(stack_x);
	if (is_empty(stack_y))
	{
		stack_y->head = ft_nodenew(temp);
		stack_y->top = stack_y->head;
		stack_y->top->index = idx;
	}
	else
	{
		stack_y->top = ft_add_back(ft_lastnode(stack_y->head),
				ft_nodenew(temp));
		stack_y->top->index = idx;
	}
	stack_y->size++;
	ft_printf("%s", instruction);
}
