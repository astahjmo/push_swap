/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:39:42 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/11 19:39:43 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
