/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:40:27 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/13 15:25:30 by johmatos         ###   ########.fr       */
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
	cursor = stack->top;
	ft_printf("Value\t-\tindex\n");
	while (cursor)
	{
		ft_printf("%d\t-\t%d\n", cursor->value, cursor->index);
		cursor = cursor->back;
	}
}
