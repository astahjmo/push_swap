/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:47:21 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/16 15:49:45 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void printf_stack(t_node *head)
{
	t_node *cursor;

	cursor = head;
	while (cursor)
	{
		ft_printf("%d\n", cursor->value);
		cursor = cursor->next;
	}
}
