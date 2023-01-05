/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastnode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:55:06 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/05 17:02:00 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_lastnode(t_node *node)
{
	if (!node)
		return (0);
	while (node)
	{
		if (!node->next)
			return (node);
		node = node->next;
	}
	return (node);
}
