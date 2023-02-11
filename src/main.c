/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:40:47 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/11 19:40:47 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_data	data;

	if (!check_arguments(argc, argv))
		return (ft_printf("Error\n"));
	data.stack_a = init_stack(argc, argv);
	data.stack_b = init_stack(0, NULL);
	mapper_index(data.stack_a);
	sort_handler(data.stack_a, data.stack_b);
	if (DEBUG)
		printf_stack(data.stack_a, 'a');
	clear_memory(data.stack_a);
	clear_memory(data.stack_b);
	return (0);
}
