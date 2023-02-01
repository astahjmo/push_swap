/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:03:50 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/31 18:41:47 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_data	data;

	if (!check_arguments(argc, argv))
		return (ft_printf("Error \n"));
	data.stack_a = init_stack(argc, argv);
	data.stack_b = init_stack(0, NULL);
	// printf_stack(data.stack_a, 'a');
	sort_handler(data.stack_a, data.stack_b);
}
