/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:06:39 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/02 21:47:32 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simple_sort(t_stack *a, t_stack *b)
{
	t_node	*carry;
	int		aux;

	while (!is_empty(a))
	{
		if  (is_empty(b))
			push(a,b,PB);
		carry = a->top;
		if (carry->value > b->top->value)
			push(a, b, PB);
		else if (carry->value < b->top->value && b->top->back && carry->value > b->top->back->value)
		{
			push(a, b, PB);
			swap(b,SB);
		}
		else
		{
			aux = carry->value;
			pop(a);
			while (!is_empty(b)) 
			{
				if (aux > b->top->value)
				{
					b->top = ft_add_back(ft_nodenew(aux), b->top);
					b->size++;
					break;
				}
				else if (aux < b->top->value && b->top->back && aux > b->top->back->value)
				{
					b->top = ft_add_back(ft_lastnode(b->head),
					ft_nodenew(aux));
					b->size++;
					swap(b,SB);
					break;
				}
				push(b, a,PA);
			}
		}
	}
	while (!is_empty(b))
		push(b, a,PA);
}
