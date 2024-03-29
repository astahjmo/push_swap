/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_ab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:12:49 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/03 22:12:47 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr_rotate_ab(t_stack *generic_a, t_stack *generic_b)
{
	rrotate(generic_a, NULL);
	rrotate(generic_b, NULL);
	ft_printf(RR);
}
