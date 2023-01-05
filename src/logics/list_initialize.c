/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_initialize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:10:23 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/05 16:56:02 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	populate_stack(int size, char **childs, t_stack *stack)
{
	int		index;

	index = 1;
	while (size > index)
	{
		if (stack->size == 0)
			stack->head = ft_nodenew(ft_atoi(childs[index]));
		else
			stack->top = ft_add_back(&stack->head,
					ft_nodenew(ft_atoi(childs[index])));
		stack->size++;
		index++;
	}
	return (1);
}

int	init_stack(int argc, char *argv[])
{
	t_stack	*stack_a;

	stack_a = malloc(sizeof(t_stack));
	stack_a->size = 0;
	stack_a->pop = pop;
	stack_a->push = push;
	stack_a->is_empty = is_empty;
	stack_a->top = NULL;
	stack_a->head = NULL;
	if (!populate_stack(argc, argv, stack_a))
		return (0);
	return (1);
}
