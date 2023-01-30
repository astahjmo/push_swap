/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:49:25 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/30 19:04:30 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rotate(t_stack *generic, char *instruction)
{
	t_node	*temp;

	temp = generic->head;
	generic->head = temp->next;
	generic->head->back = NULL;
	temp->next = generic->top;
	generic->top->next = temp;
	generic->top = temp;
	generic->top->next = NULL;
	if (instruction)
		ft_printf(instruction);
}
