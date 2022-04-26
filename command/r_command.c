#include "../push_swap.h"

void	ra(t_node **stack_a, int n)
{
	t_node	*head;
	t_node	*tail;

	head = *stack_a;
	tail = ft_lstlast(*stack_a);
	*stack_a = head->next;
	head->next = NULL;
	tail->next = head;
	if (n == 1)
		write(1, "ra\n", 3);
}
