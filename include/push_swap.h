/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:34:46 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/30 19:39:45 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/include/libft.h"
# include <stdio.h>
# include <limits.h>
# define RA "ra\n"
# define RB "rb\n"
# define RR "rr\n"
# define PA "pa\n"
# define PB "pb\n"
# define SA "sa\n"
# define SB "sb\n"
# define SS "ss\n"
# define RRA "rra\n"
# define RRB "rrb\n"
# define RRR "rrr\n"

typedef struct s_stack	t_stack;
typedef struct s_node	t_node;
typedef struct s_data	t_data;

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

typedef struct s_data{
	t_stack		*stack_a;
	t_stack		*stack_b;
}				t_data;

int		check_arguments(int argc, char *argv[]);
int		is_empty(t_stack *stack);
void	pop(t_stack *stack);
void	top(t_stack *stack);
void	ft_add_front(t_node *lst, t_node *front);
void	*ft_nodenew(int content);
t_node	*ft_add_back(t_node *node, t_node *back);
t_node	*ft_lastnode(t_node *node);
t_node	*ft_lstmap(t_node *lst, void *(*f)(void *), void (*del)(void *));
t_stack	*init_stack(int argc, char *argv[]);

//
// Instructions
//

void	swap(t_stack *generic, char *instruction);
void	sswap(t_stack *stack_a, t_stack *stack_b);
void	push(t_stack *stack_x, t_stack *stack_y, char *instruction);
void	rotate(t_stack *generic, char *instruction);
void	rotate_ab(t_stack *generic_a, t_stack *generic_b);
void	rrotate(t_stack *stack, char *instruction);

//
//utils
//

void	printf_stack(t_node *head);

#endif
