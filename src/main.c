/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:03:50 by johmatos          #+#    #+#             */
/*   Updated: 2022/12/13 16:04:38 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdlib.h>

void pop(t_stack *stack, int value)
{
	printf("poped\n");
}

void push(t_stack *stack, int value)
{
	printf("pushed\n");
}

int is_empty(t_stack *stack)
{
	return (stack->size == 0);
}

t_node top(t_stack *stack)
{

}

int size(t_stack *stack)
{
	printf("the size of stack is: \n");
}

int main(void)
{
	t_stack *stack_a = {
		->top = top,
	};
	int a = 10;

	stack_a = malloc(sizeof(t_stack));
	stack_a = {->top}
	printf("%d", *(int*)stack_a->head->value);
}
