/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:06:39 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/01 16:48:46 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simple_sort(t_stack *a, t_stack *b)
{
	t_node	*carry;

	while (!is_empty(a))
	{
		if (is_empty(b))
			push(a, b, PB);
		carry = a->top;
		if (carry->value < b->top->value)
			push(a, b, PB);
	}
}
