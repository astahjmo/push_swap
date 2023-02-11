/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:39:27 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/11 19:39:29 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *stack, char *instruction)
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
