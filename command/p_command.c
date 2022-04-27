/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_command.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyumpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:05:17 by gyumpark          #+#    #+#             */
/*   Updated: 2022/04/27 20:05:18 by gyumpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_node **stack_a, t_node **stack_b, int n)
{
	t_node	*point;
	t_node	*to;
	t_node	*from;

	if (ft_lstsize(*stack_b) == 0)
		return ;
	to = *stack_a;
	from = *stack_b;
	point = from;
	from = from->next;
	*stack_b = from;
	if (!to)
	{
		to = point;
		to->next = NULL;
		*stack_a = to;
	}
	else
	{
		point->next = to;
		*stack_a = point;
	}
	if (n == 1)
		write(1, "pa\n", 3);
}

void	pb(t_node **stack_a, t_node **stack_b, int n)
{
	t_node	*point;
	t_node	*to;
	t_node	*from;

	if (ft_lstsize(*stack_a) == 0)
		return ;
	to = *stack_b;
	from = *stack_a;
	point = from;
	from = from->next;
	*stack_a = from;
	if (!to)
	{
		to = point;
		to->next = NULL;
		*stack_b = to;
	}
	else
	{
		point->next = to;
		*stack_b = point;
	}
	if (n == 1)
		write(1, "pb\n", 3);
}
