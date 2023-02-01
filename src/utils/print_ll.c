/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:47:21 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/31 18:37:35 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printf_stack(t_stack *stack, char id)
{
	t_node	*cursor;

	ft_printf("Stack info: %c\n", id);
	ft_printf("Stack size: %d\n", stack->size);
	ft_printf("Stack top: %d\n", stack->top->value);
	ft_printf("Stack head: %d\n", stack->head->value);
	ft_printf("Elements:\n", stack);
	cursor = stack->head;
	while (cursor)
	{
		ft_printf("%d\n", cursor->value);
		cursor = cursor->next;
	}
}
