/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:34:46 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/03 11:59:01 by johmatos         ###   ########.fr       */
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
}					t_node;

typedef struct s_stack{
	uint64_t	size;
	t_node		*head;
	void		(*push)(t_stack *stack, int value);
	void		(*pop)(t_stack *stack, int index);
	t_node		(*top)(t_stack *stack);
	int			(*isEmpty)(t_stack *stack);
}				t_stack;

int		check_arguments(int argc, char *argv[]);
int		isEmpty(t_stack *stack);
void	push(t_stack *stack, int value);
void	pop(t_stack *stack, int value);
void	top(t_stack *stack);
int	init_stack(int argc, char *argv[]);
void	ft_add_back(t_node **lst, t_node *new);
void	ft_add_front(t_node **lst, t_node *new);
void	*ft_nodenew(int content);
t_node *ft_lastnode(t_node *node);
t_node *ft_lstmap(t_node *lst, void *(*f)(void *), void (*del)(void *));

#endif
