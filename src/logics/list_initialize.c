/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_initialize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:40:02 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/11 19:40:03 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	populate_stack(int size, char **childs, t_stack *stack)
{
	int		index;

	index = size - 1;
	while (index >= 1)
	{
		if (is_empty(stack))
			stack->head = ft_nodenew(ft_atoi(childs[index]));
		else
			stack->top = ft_add_back(ft_lastnode(stack->head),
					ft_nodenew(ft_atoi(childs[index])));
		stack->size++;
		index--;
	}
	return (1);
}

t_stack	*init_stack(int argc, char *argv[])
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	stack->size = 0;
	stack->top = NULL;
	stack->head = NULL;
	if (argc >= 3)
		populate_stack(argc, argv, stack);
	return (stack);
}
