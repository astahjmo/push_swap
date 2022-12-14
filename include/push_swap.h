/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:34:46 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/08 05:46:17 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/include/libft.h"
# include <stdio.h>
# include "errors.h"
# include <limits.h>

typedef struct s_stack t_stack;
typedef struct s_node t_node;

typedef struct s_node{
	int				value;
	struct s_node	*next;
	struct s_node	*back;
}					t_node;

typedef struct s_stack{
	uint64_t	size;
	t_node		*head;
	t_node		*top;
}				t_stack;

int		check_arguments(int argc, char *argv[]);
int		is_empty(t_stack *stack);
void	pop(t_stack *stack);
void	top(t_stack *stack);
int	init_stack(int argc, char *argv[]);
t_node	*ft_add_back(t_node *node, t_node *back);
void	ft_add_front(t_node *lst, t_node *front);
void	*ft_nodenew(int content);
t_node *ft_lastnode(t_node *node);
t_node *ft_lstmap(t_node *lst, void *(*f)(void *), void (*del)(void *));

// Instructions
//
void swap(t_stack *generic, char *instruction);
void sswap(t_stack *stack_a, t_stack *stack_b);
void push(t_stack *stack_x, t_stack *stack_y, char *instruction);
void	rotate(t_stack *generic);
#endif
