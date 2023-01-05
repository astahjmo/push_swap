/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addback.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:44:48 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/05 16:59:26 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_add_back(t_node **node, t_node *new)
{
	t_node	*last;

	if (!node || !*node)
		return (0);
	last = ft_lastnode(*node);
	last->next = new;
	return (last->next);
}
