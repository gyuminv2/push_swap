/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyumpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:09:23 by gyumpark          #+#    #+#             */
/*   Updated: 2022/04/27 20:09:25 by gyumpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*ft_lstlast(t_node *head)
{
	t_node	*node;

	node = head;
	while (node->next)
	{
		node = node->next;
		if (node->next == NULL)
			return (node);
	}
	return (node);
}
