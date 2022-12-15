/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_analysis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:37:15 by johmatos          #+#    #+#             */
/*   Updated: 2022/12/13 23:44:31 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int check_arguments(int argc, char *argv[])
{
	int index;
	char *arg;

	index= 1;
	while (index < argc)
	{
		arg = argv[index];
		if (!ft_isdigit(*arg) && (*arg == '+' || *arg == '-'))
			arg++;
		while (*arg)
			if (!ft_isdigit(*arg++))
				return (0);
		index++;
	}
	return (1);
}
