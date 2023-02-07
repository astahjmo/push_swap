/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapper_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:45:35 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/07 20:03:13 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*sort_arr(int *arr, int size)
{
	int	*sorted_arr;
	int	idx;
	int	aux;

	sorted_arr = malloc(size * sizeof(int));
	idx = -1;
	while (++idx < size)
		sorted_arr[idx] = arr[idx];
	idx = 0;
	while (idx < size - 1)
	{
		if (sorted_arr[idx] > sorted_arr[idx + 1])
		{
			aux = sorted_arr[idx];
			sorted_arr[idx] = sorted_arr[idx + 1];
			sorted_arr[idx + 1] = aux;
			idx = -1;
		}
		idx++;
	}
	return (sorted_arr);
}

static int	*cpy_values(t_stack *a)
{
	int			*arr;
	t_node		*cursor;
	u_int64_t	idx;

	arr = malloc(a->size * sizeof(int));
	cursor = a->head;
	idx = 0;
	while (idx < a->size)
	{
		arr[idx] = cursor->value;
		cursor = cursor->next;
		idx++;
	}
	return (arr);
}

static int	get_pos_from_value(int value, int *sorted_arr, int size)
{
	int	idx;

	idx = 0;
	while (idx < size)
	{
		if (sorted_arr[idx] == value)
			return (idx);
		idx++;
	}
	return (-1);
}

void	mapper_index(t_stack *a)
{
	int		*arr;
	int		*sorted_arr;
	t_node	*cursor;

	arr = cpy_values(a);
	sorted_arr = sort_arr(arr, a->size);
	cursor = a->head;
	while (cursor)
	{
		cursor->index = get_pos_from_value(cursor->value, sorted_arr, a->size);
		cursor = cursor->next;
	}
	free(arr);
	free(sorted_arr);
}
