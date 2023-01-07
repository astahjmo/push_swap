/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addfront.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:57:05 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/07 20:47:55 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_front(t_node *old, t_node *new)
{
	t_node *temp;

	temp = malloc(sizeof(t_node));
	if (!old)
		return ;
	*temp = *old;
	*old = *new;
	*new = *temp;
	old->next = new;
	free(temp);
}
