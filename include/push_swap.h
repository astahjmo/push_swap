/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:40:55 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/11 19:40:55 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/include/libft.h"
# include <limits.h>

# ifndef DEBUG
#  define DEBUG 0
# endif

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
	int				index;
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
t_stack	*init_stack(int argc, char *argv[]);
void	mapper_index(t_stack *a);

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
// algorithms
//

void	sort_handler(t_stack *a, t_stack *b);
void	simple_sort(t_stack *a, t_stack *b);
void	complex_sort(t_stack *a, t_stack *b);

//
//utils
//

int		is_ordered(t_stack *x);
int		is_empty(t_stack *stack);
void	ft_add_front(t_node *lst, t_node *front);
void	*ft_nodenew(int content);
void	printf_stack(t_stack *stack, char id);
void	pop(t_stack *stack);
void	clear_memory(t_stack *a);
t_node	*ft_add_back(t_node *node, t_node *back);
t_node	*ft_lastnode(t_node *node);

#endif
