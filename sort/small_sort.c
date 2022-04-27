/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyumpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:11:42 by gyumpark          #+#    #+#             */
/*   Updated: 2022/04/27 20:11:44 by gyumpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sort_idx_4(t_node **stack_a, t_node **stack_b)
{
	int	index_min;

	index_min = where_min(stack_a, get_min_data(stack_a, -1));
	if (index_min == 1)
		ra(stack_a, 1);
	else if (index_min == 2)
	{
		ra(stack_a, 1);
		ra(stack_a, 1);
	}
	else if (index_min == 3)
	{
		rra(stack_a, 1);
	}
	if (sorted_stack(stack_a))
		return ;
	pb(stack_a, stack_b, 1);
	sort_idx_3(stack_a);
	pa(stack_a, stack_b, 1);
}

int	get_min_data(t_node **stack, int state)
{
	t_node	*head;
	int		min;

	head = *stack;
	min = head -> index;
	while (head -> next)
	{
		head = head -> next;
		if ((head->index < min) && head->index != state)
			min = head->index;
	}
	return (min);
}

void	sort_idx_3(t_node **stack_a)
{
	t_node	*head;
	int		first_min;
	int		second_min;

	head = *stack_a;
	first_min = get_min_data(stack_a, -1);
	second_min = get_min_data(stack_a, first_min);
	if (head->index == first_min && head->next->index != second_min)
		sa_ra(stack_a);
	else if (head->index == second_min)
	{
		if (head->next->index == first_min)
			sa(stack_a, 1);
		else
			rra(stack_a, 1);
	}
	else
	{
		if (head->next->index == first_min)
			ra(stack_a, 1);
		else
			sa_rra(stack_a);
	}
}

void	sort_idx_5(t_node **stack_a, t_node **stack_b)
{
	int	index_min;

	index_min = where_min(stack_a, get_min_data(stack_a, -1));
	if (index_min == 1)
		ra(stack_a, 1);
	else if (index_min == 2)
	{
		ra(stack_a, 1);
		ra(stack_a, 1);
	}
	else if (index_min == 3)
	{
		rra(stack_a, 1);
		rra(stack_a, 1);
	}
	else if (index_min == 4)
		rra(stack_a, 1);
	if (sorted_stack(stack_a))
		return ;
	pb(stack_a, stack_b, 1);
	sort_idx_4(stack_a, stack_b);
	pa(stack_b, stack_a, 1);
}

void	small_sort(t_node **stack_a, t_node **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size <= 0 || size == 1
		|| sorted_stack(stack_a))
		return ;
	if (size == 2)
		sa(stack_a, 1);
	else if (size == 3)
		sort_idx_3(stack_a);
	else if (size == 4)
		sort_idx_4(stack_a, stack_b);
	else if (size == 5)
		sort_idx_5(stack_a, stack_b);
}
