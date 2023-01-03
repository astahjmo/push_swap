/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:03:50 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/03 15:00:11 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	if (argc < 3)
		return (printf(NO_ARGS));
	if(!check_arguments(argc, argv))
		ft_printf(ARGS_ERROR);
	if (!init_stack(argc, argv))
		ft_printf(ERR_STACK);
}
