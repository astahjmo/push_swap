/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:20:38 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/05 00:08:56 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	complex_sort(t_stack *a, t_stack *b)
{
	while (a->size != 3)
		push(a, b, PB);
	solve_three(a);
	while (!is_empty(b))
		dynamic_sort(a, b);
}
