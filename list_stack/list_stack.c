#include "../push_swap.h"

int	where_min(t_node **stack, int state)
{
	t_node	*head;
	int		i;

	head = *stack;
	i = 0;
	while (head->index != state && head != NULL)
	{
		i++;
		head = head->next;
	}
	return (i);
}

void	free_stack(t_node **stack)
{
	t_node	*head;
	t_node	*node;

	head = *stack;
	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
	free(stack);
}

void	stackinit(t_node **stack_a, int ac, char *av[])
{
	t_node	*node;
	int		i;
	char	**save;

	i = 0;
	if (ac == 2)
		save = ft_split(av[1], ' ');
	else
	{
		i = 1;
		save = av;
	}
	while (save[i])
	{
		node = ft_lstnew(ft_atoll(save[i]));
		ft_lstadd_back(stack_a, node);
		i++;
	}
	numbering_stack(stack_a);
	if (ac == 2)
		ft_str_free(save);
}
