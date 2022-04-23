#include "push_swap.h"

void sort_stack(t_node **stack_a, t_node **stack_b, int ac)
{
    int size;

    size = ft_lstsize(*stack_a);
    if (ac <= 6 && size <= 5)
        small_sort(stack_a, stack_b);
    else if (ac == 2 && size > 5)
        radix_sort(stack_a, stack_b);
    else
        radix_sort(stack_a, stack_b);
}

static t_node *compare_data_small_indexing(t_node **stack_a)
{
    t_node  *head;
    t_node  *min;
    int     al_min;
    
    head = *stack_a;
    min = NULL;
    al_min = 0;
    while (head)
    {
        if ((head->index == -1) && (!al_min || head->data < min->data))
        {
            min = head;
            al_min = 1;
        }
        head = head->next;
    }
    return (min);
}

void numbering_stack(t_node **stack_a)
{
    t_node  *head;
    int     i;

    i = 0;
    head = compare_data_small_indexing(stack_a);      // data가 가장 작은값을 찾음 (오름차순)
    while (head)
    {
        head->index = i;
        head = compare_data_small_indexing(stack_a);
        i++;
    }
}

int main(int ac, char *av[])
{
    t_node  **stack_a;
    t_node  **stack_b;

    if (ac < 2)
        ft_print_error(1);
    ft_check_error(ac, av);
    stack_a = (t_node **)malloc(sizeof(t_node));
    stack_b = (t_node **)malloc(sizeof(t_node));
    *stack_a = NULL;
    *stack_b = NULL;
    stackinit(stack_a, ac, av);
    if (sorted_stack(stack_a))
    {
        free_stack(stack_a);
        free_stack(stack_b);
        return (0);
    }
    sort_stack(stack_a, stack_b, ac);
    free_stack(stack_a);
	free_stack(stack_b);
    return (0);
}