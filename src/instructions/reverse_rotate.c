/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:39:16 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/11 19:39:18 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
