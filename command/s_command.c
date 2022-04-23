#include "../push_swap.h"

void	sa(t_node **stack_a, int n)
{
	t_node	*point;

	if (ft_lstsize(*stack_a) > 2)
	{
		point = (*stack_a)->next;
		(*stack_a)->next = point->next;
		point->next = *stack_a;
		*stack_a = point;
	}
	if (n == 1)
		write(1, "sa\n", 3);
}