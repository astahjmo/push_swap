/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:06:39 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/03 15:33:23 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	solve_two(t_stack *a)
{
	if (a->top->value > a->top->back->value)
		swap(a, SA);
}

static void	solve_three(t_stack *a, t_stack *b)
{
	int			top;
	int			mid;
	int			head;
	static int	movs;

	top = a->top->value;
	head = a->head->value;
	mid = a->head->next->value;
	if ((head > top && head > mid)
	 || (mid > head && movs < 1))
		swap(a, SA);
	else if (mid < head && mid < top)
		rrotate(a, RRA);
	else if (mid > top && mid > head)
		rotate(a, RA);
	movs++;
}

void	simple_sort(t_stack *a, t_stack *b)
{
	if (a->size == 2)
		solve_two(a);
	if (a->size == 3)
		while (!is_ordered(a))
			solve_three(a, b);
}
