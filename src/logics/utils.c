/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:20:00 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/30 20:50:11 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	pop(t_stack *stack)
{
	long int	offset;
	int			index;
	t_node		*cursor;

	offset = stack->size;
	index = 0;
	cursor = stack->head;
	while (cursor && index++ != offset-1)
		cursor = cursor->next;
	stack->top = cursor;
	stack->size--;
	free(cursor->next);
	cursor->next = NULL;
}

int	is_empty(t_stack *stack)
{
	if (stack == NULL)
		return (0);
	if (stack->size == 0)
		return (1);
	return (0);
}
