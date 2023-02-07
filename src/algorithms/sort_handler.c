/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:24:23 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/07 19:56:55 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_handler(t_stack *a, t_stack *b)
{
	if (is_ordered(a))
		return ;
	if (a->size <= 5)
		simple_sort(a, b);
	else
		complex_sort(a, b);
	return ;
}
