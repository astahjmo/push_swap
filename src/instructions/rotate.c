/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:49:25 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/08 05:49:17 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rotate(t_stack *generic)
{
	t_node	*cursor;
	t_node	*temp;
	int		index;

	index = generic->size;
	while (index)
	{
		cursor = generic->head;
		cursor = cursor->next;
		temp = generic->head;
		temp->next =NULL;
		generic->top->next = temp;
		generic->top = temp;
		temp = cursor;
		index--;
	}
}
