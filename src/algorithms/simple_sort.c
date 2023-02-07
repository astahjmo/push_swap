/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:06:39 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/07 20:00:01 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	solve_two(t_stack *a)
{
	if (a->top->value > a->top->back->value)
		swap(a, SA);
}

static void	solve_three(t_stack *a)
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

static int	get_min_index(t_stack *a)
{
	t_node	*cursor;
	int		min;

	cursor = a->head;
	min = 0;
	while (cursor)
	{
		if (cursor->index < 2)
			return (min);
		min++;
		cursor = cursor->next;
	}
	return (min);
}

static void	solve_above_three(t_stack *a, t_stack *b)
{
	while (a->size > 3 && !is_ordered(a))
	{
		if (a->top->index < 2)
			push(a, b, PB);
		else if (get_min_index(a) > (int)a->size / 2)
			while (a->top->index >= 2)
				rotate(a, RRA);
		else
			while (a->top->index >= 2)
				rotate(a, RA);
	}
}

void	simple_sort(t_stack *a, t_stack *b)
{
	if (is_ordered(a))
		return ;
	else if (a->size == 2)
		solve_two(a);
	else if (a->size <= 5)
	{
		solve_above_three(a, b);
		while (!is_ordered(a))
			solve_three(a);
	}
	if (b->top->index < 1)
		swap(b, SB);
	while (!is_empty(b))
		push(b, a, PA);
	if (a->top->index != 0)
		swap(a, SA);
}
