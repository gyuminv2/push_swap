/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyumpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:08:43 by gyumpark          #+#    #+#             */
/*   Updated: 2022/04/27 20:08:45 by gyumpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_back(t_node **stack, t_node *new)
{
	t_node	*last;

	if (*stack)
	{
		last = ft_lstlast(*stack);
		last->next = new;
		new->next = NULL;
	}
	else
	{
		*stack = new;
		(*stack)->next = NULL;
	}
}
