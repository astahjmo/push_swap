/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_analysis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:39:54 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/11 19:39:55 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_overflow(char *argv)
{
	long long	nbr;

	nbr = ft_atol(argv);
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

static int	has_duplicate(int argc, char *argv[])
{
	int	idx;
	int	cur;
	int	debt;

	idx = 1;
	cur = 1;
	debt = 0;
	while (idx < argc)
	{
		while (cur < argc)
		{
			if (ft_strncmp(argv[idx], argv[cur],
					ft_strlen(argv[idx]) + ft_strlen(argv[cur])) == 0)
				debt++;
			cur++;
		}
		if (debt > 1)
			return (1);
		debt = 0;
		cur = 1;
		idx++;
	}
	return (0);
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
		index++;
	}
	if (has_duplicate(argc, argv))
		return (0);
	return (1);
}
