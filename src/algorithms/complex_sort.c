/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:20:38 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/07 19:56:03 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	complex_sort(t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	max_bits;
	int	size;

	i = 0;
	size = a->size;
	max_bits = 0;
	while ((size >> max_bits))
		max_bits++;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((a->top->index >> i & 1) == 1)
				rotate(a, RA);
			else
				push(a, b, PB);
			j++;
		}
		while (!is_empty(b))
			push(b, a, PA);
		i++;
	}
}
