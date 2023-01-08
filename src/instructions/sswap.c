/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sswap.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 21:11:05 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/08 03:58:52 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

void sswap(t_stack *stack_a, t_stack *stack_b)
{
	t_node *top;
	t_node *back;
	t_node temp;

	top = stack_a->top;
	back = stack_a->top->back;

	temp = *top;
	*top = *back;
	*back = temp;
	back->next = top;
	top->next = NULL;
	stack_a->top = top;
	top = stack_b->top;
	back = stack_b->top->back;
	temp = *top;
	*top = *back;
	*back = temp;
	back->next = top;
	top->next = NULL;
	ft_printf("ss\n");
}
