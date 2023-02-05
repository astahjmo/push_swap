/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:06:39 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/04 21:38:12 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	solve_two(t_stack *a)
{
	if (a->top->value > a->top->back->value)
		swap(a, SA);
}

void	solve_three(t_stack *a)
{
	int			top;
	int			mid;
	int			bot;

	top = a->top->value;
	bot = a->head->value;
	mid = a->head->next->value;
	if (mid < bot && mid < top && bot < top)
		rotate(a, RA);
	else if (mid > top && mid > bot && bot < top)
		rrotate(a, RRA);
	else
		swap(a, SA);
}

void	simple_sort(t_stack *a)
{
	if (a->size == 2)
		solve_two(a);
	if (a->size == 3)
	{
		while (!is_ordered(a))
			solve_three(a);
	}
}
