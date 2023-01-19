/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:49:13 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/19 18:24:26 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate(t_stack *stack, char *instruction)
{
	t_node	*temp;

	temp = stack->head;
	stack->head = stack->top;
	stack->top = stack->top->back;
	stack->top->next = NULL;
	stack->head->next = temp;
	temp->back = stack->head;
	stack->head->back = NULL;
	if (instruction)
		ft_printf(instruction);
}
