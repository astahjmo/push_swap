/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:20:00 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/03 17:30:29 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

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
	
	index = 0;
	cursor = stack->head;
	while(index++ < stack->size - 1 && cursor)
		cursor = cursor->next;
	printf("Value: %d\n", cursor->value);
	printf("Index: %lu\n", index);
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
