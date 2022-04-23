#include "../push_swap.h"

void	ft_lstadd_front(t_node **stack, t_node *new)
{
	if (!new)
		return ;
	new -> next = *stack;
	*stack = new;
}
