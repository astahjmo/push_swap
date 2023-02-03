/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manage.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:20:00 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/03 14:36:23 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_ordered(t_stack *x)
{
	t_node	*cursor;

	cursor = x->head;
	while (cursor)
	{
		if (cursor->next)
			if (cursor->value < cursor->next->value)
				return (0);
		cursor = cursor->next;
	}
	return (1);
}

void	pop(t_stack *stack)
{
	long int	offset;
	int			index;
	t_node		*cursor;

	offset = stack->size;
	index = 1;
	cursor = stack->head;
	while (cursor && index++ < offset - 1)
		cursor = cursor->next;
	free(cursor->next);
	cursor->next = NULL;
	if (offset == 1)
	{
		free(cursor);
		cursor = NULL;
		stack->head = NULL;
	}
	stack->top = cursor;
	stack->size--;
}

int	is_empty(t_stack *stack)
{
	if (stack == NULL)
		return (1);
	if (stack->size == 0)
		return (1);
	return (0);
}
