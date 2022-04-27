/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyumpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:09:27 by gyumpark          #+#    #+#             */
/*   Updated: 2022/04/27 20:09:29 by gyumpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*ft_lstnew(int data)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->data = data;
	new->index = -1;
	new->next = NULL;
	return (new);
}
