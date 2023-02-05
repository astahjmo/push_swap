/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 21:11:05 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/04 21:11:06 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

void	swap(t_stack *generic, char *instruction)
{
	t_node	*top;
	t_node	*back;
	t_node	temp;

	if (generic->size < 2)
		return ;
	top = generic->top;
	back = generic->top->back;
	temp = *top;
	*top = *back;
	*back = temp;
	back->next = top;
	top->next = NULL;
	back->back = top->back;
	top->back = back;
	generic->top = top;
	if (instruction)
		ft_printf(instruction);
}
