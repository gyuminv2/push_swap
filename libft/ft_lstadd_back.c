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