#include "push_swap.h"

int	ft_av_repeat(char *av[], int num, int i)
{
	i++;
	while (av[i])
	{
		if (ft_atoll(av[i]) == num)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_print_error(int e)
{
	if (e == 2)
		write(2, "Error\n", 6);
	exit(1);
}

int	sorted_stack(t_node **stack_a)
{
	t_node	*head;
	int		i;

	head = *stack_a;
	i = (*stack_a)->index;
	while (head)
	{
		if (head->index != i)
		{
			return (0);
		}
		head = head -> next;
		i++;
	}
	return (1);
}

void	ft_check_error(int ac, char *av[])
{
	int		i;
	long	num;
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
		num = ft_atoll(save[i]);
		if (!ft_str_is_digit(save[i]) || !ft_av_repeat(save, num, i))
			ft_print_error(2);
		i++;
	}
	if (ac == 2)
		ft_str_free(save);
}
