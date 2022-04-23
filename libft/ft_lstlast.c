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
