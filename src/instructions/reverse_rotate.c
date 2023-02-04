/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:49:25 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/03 22:12:02 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rrotate(t_stack *generic, char *instruction)
{
	t_node	*temp;

	temp = generic->head;
	generic->head = temp->next;
	generic->head->back = NULL;
	temp->next = generic->top;
	generic->top->next = temp;
	temp->back = generic->top;
	generic->top = temp;
	generic->top->next = NULL;
	if (instruction)
		ft_printf(instruction);
}
