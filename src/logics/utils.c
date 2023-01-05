/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:20:00 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/05 16:54:26 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *stack, int value)
{
	if (stack == NULL)
		return ;
	stack->top = ft_add_back(&stack->head, ft_nodenew(value));
	stack->size++;
}

void	pop(t_stack *stack)
{
	uint64_t	index;
	t_node		*cursor;

	if (stack == NULL)
		return ;
	index = 0;
	cursor = stack->head;
	while (index++ < stack->size -2 && stack->size > 1
		&& cursor && cursor->next != NULL)
		cursor = cursor->next;
	stack->size--;
	free(cursor->next);
	cursor->next = NULL;
	if (stack->size == 0)
	{
		free(stack->head);
		stack->head = NULL;
		stack->top = NULL;
		return ;
	}
	stack->top = cursor;
}

int	is_empty(t_stack *stack)
{
	if (stack == NULL)
		return (0);
	if (stack->size == 0)
		return (1);
	return (0);
}
