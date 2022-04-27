/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sandglass.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyumpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:06:46 by gyumpark          #+#    #+#             */
/*   Updated: 2022/04/28 04:07:16 by gyumpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sort_idx_100(t_node **stack_a, t_node **stack_b)
{
    int mid = find_idx(stack_a, 49);
    int top = find_idx(stack_a, 99);
}

void    sand_sort(t_node **stack_a, t_node **stack_b)
{
    int size;

    size = ft_lstsize(*stack_a);
	if (size == 100)
		sort_idx_100(stack_a, stack_b);
	else if (size == 500)
		sort_idx_500(stack_a, stack_b);
}