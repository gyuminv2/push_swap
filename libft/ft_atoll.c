/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyumpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:08:38 by gyumpark          #+#    #+#             */
/*   Updated: 2022/04/27 20:08:39 by gyumpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long int	ft_atoll(const char *str)
{
	int				i;
	int				n;
	long long int	result;

	i = 0;
	n = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			n = -1;
	}
	while (ft_is_digit(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	result *= n;
	if (result > INT_MAX || result < INT_MIN)
		ft_print_error(2);
	return (result);
}
