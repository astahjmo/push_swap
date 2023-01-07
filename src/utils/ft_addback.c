/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addback.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:44:48 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/06 17:13:13 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_add_back(t_node *node, t_node *new)
{

	t_node	*temp;

	if (!node)
		return (0);
	temp = node->next;
	new->next = temp;
	node->next = new;
	return (node);
}
