/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:49:03 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/08 04:28:36 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void push(t_stack *stack_x, t_stack *stack_y, char *instruction)
{
	int temp;

	temp = stack_x->top->value;
	pop(stack_x);
	if (stack_y->size == 0)
		stack_y->head = ft_nodenew(temp);
	else
		stack_y->top = ft_add_back(ft_lastnode(stack_y->head),
				ft_nodenew(temp));
	stack_y->size++;
	ft_printf("%s\n", instruction);
}
