/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_command.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyumpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:07:47 by gyumpark          #+#    #+#             */
/*   Updated: 2022/04/27 20:07:50 by gyumpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_node **stack_a, int n)
{
	t_node	*point;

	if (ft_lstsize(*stack_a) > 2)
	{
		point = (*stack_a)->next;
		(*stack_a)->next = point->next;
		point->next = *stack_a;
		*stack_a = point;
	}
	if (n == 1)
		write(1, "sa\n", 3);
}
