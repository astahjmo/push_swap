/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodenew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:47:49 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/03 10:56:44 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_nodenew(int content)
{
	t_node *node;

	node = malloc(sizeof(t_node) * 1);
	if (node == NULL)
		return ((void*) NULL);
	node->value = content;
	node->next = NULL;
	return (node);
}
