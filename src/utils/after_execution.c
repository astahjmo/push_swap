/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   after_execution.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 20:58:43 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/07 19:54:56 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear_memory(t_stack *a)
{
	t_node	*cursor;

	cursor = a->top;
	if (cursor)
	{
		cursor = cursor->back;
		while (cursor->back != NULL)
		{
			free(cursor->next);
			cursor = cursor->back;
		}
		free (cursor->next);
		free(cursor);
	}
	free (a);
	exit(1);
}
