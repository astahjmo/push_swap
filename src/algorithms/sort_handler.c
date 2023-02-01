/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:24:23 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/31 18:43:27 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_handler(t_stack *a, t_stack *b)
{
	if (a->size == 1)
		return ;
	if (a->size == 2)
		if (a->head->value < a->top->value)
			return (swap(a, SA));
	if (!is_empty(a))
		return ;
	return ;
}
