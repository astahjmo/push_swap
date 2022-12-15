/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:34:46 by johmatos          #+#    #+#             */
/*   Updated: 2022/12/13 23:22:45 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/include/libft.h"
# include <stdio.h>


typedef struct s_stack t_stack;

typedef struct s_stack{
	uint64_t	size;
	t_node		*head;
	void		(*push)(t_stack *stack, int value);
	void		(*pop)(t_stack *stack, int index);
	t_node		(*top)(t_stack *stack);
	int			(*isEmpty)(t_stack *stack);
}				t_stack;

int check_arguments(int argc, char *argv[]);
void pop(t_stack *stack, int value);
#endif
