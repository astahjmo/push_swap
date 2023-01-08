/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 21:11:05 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/08 03:54:02 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

void swap(t_stack *generic, char *instruction)
{
	t_node *top;
	t_node *back;
	t_node temp;

	top = generic->top;
	back = generic->top->back;

	temp = *top;
	*top = *back;
	*back = temp;
	back->next = top;
	top->next = NULL;
	generic->top = top;
	ft_printf("%s\n", instruction);
}
