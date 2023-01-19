/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_ab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:48:34 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/19 18:23:33 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr_rotate_ab(t_stack *a, t_stack *b)
{
	rrotate(a, NULL);
	rrotate(b, NULL);
	ft_printf(RRR);
}
