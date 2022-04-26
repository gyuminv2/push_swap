#include "../push_swap.h"

int	get_top_bit(t_node **stack_a)
{
	t_node	*head;
	int		i;
	int		top_bit;

	head = *stack_a;
	i = head->index;
	top_bit = 0;
	while (head)
	{
		if (i < head->index)
			i = head->index;
		head = head->next;
	}
	while ((i >> top_bit) != 0)
		top_bit++;
	return (top_bit);
}

void	radix_sort(t_node **stack_a, t_node **stack_b)
{
	t_node	*head;
	int		top_bit;
	int		i;
	int		j;
	int		size;

	top_bit = get_top_bit(stack_a);
	i = 0;
	size = ft_lstsize(*stack_a);
	while (i < top_bit)
	{
		j = 0;
		while (j < size)
		{
			head = *stack_a;
			if (((head->index >> i) & 1) == 1)
				ra(stack_a, 1);
			else
				pb(stack_a, stack_b, 1);
			j++;
		}
		while (ft_lstsize(*stack_b) != 0)
			pa(stack_a, stack_b, 1);
		i++;
	}
}
