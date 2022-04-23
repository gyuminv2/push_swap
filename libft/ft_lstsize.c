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