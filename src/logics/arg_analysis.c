/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_analysis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:37:15 by johmatos          #+#    #+#             */
/*   Updated: 2023/01/30 21:15:06 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_overflow(char *argv)
{
	long long	nbr;

	nbr = ft_atoi(argv);
	if (nbr <= INT_MIN || nbr >= INT_MAX)
		return (0);
	return (1);
}

static int	is_valid(char *arg)
{
	if (!ft_isdigit(*arg) && (*arg == '+' || *arg == '-'))
		arg++;
	while (*arg)
		if (!ft_isdigit(*arg++))
			return (0);
	return (1);
}

static int	check_double(char *arg, int check)
{
	static int		table[256];
	int				index;

	index = -1;
	if (check == 1 && ft_isdigit(*arg))
		table[(int)*arg]++;
	else
		while (++index < 256)
			if (table[index] > 1)
				return (0);
	return (1);
}

int	check_arguments(int argc, char *argv[])
{
	int		index;
	char	*arg;

	index = 1;
	while (index < argc)
	{
		arg = argv[index];
		if (!is_valid(arg))
			return (0);
		if (!check_overflow(arg))
			return (0);
		check_double(arg, 1);
		index++;
	}
	if (!check_double(NULL, 0))
		return (0);
	return (1);
}
