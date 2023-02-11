/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:04:22 by johmatos          #+#    #+#             */
/*   Updated: 2023/02/11 19:12:34 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atol(const char *str)
{
	long long	is_negative;
	long long	number;

	is_negative = 1;
	number = 0;
	while ((*str) && (*str >= 0 && *str <= 32) && !(*str == '\e'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			is_negative *= -1;
		}
		str++;
	}
	while ((*str) && (ft_isdigit(*str)))
	{
		number = number * 10 + (*str) - '0';
		str++;
	}
	return (number * is_negative);
}
