/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyumpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:09:31 by gyumpark          #+#    #+#             */
/*   Updated: 2022/04/27 20:09:33 by gyumpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_node *head)
{
	size_t	i;
	t_node	*node;

	node = head;
	i = 0;
	while (node)
	{
		node = node->next;
		i++;
	}
	return (i);
}
