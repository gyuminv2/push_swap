#include "push_swap.h"

int command(char *line, t_node **stack_a, t_node **stack_b)
{
    if (!(ft_strncmp(line, "pa", 2)))
    {
        pa(stack_a, stack_b, 0);
        return (0);
    }
    if (!(ft_strncmp(line, "pb", 2)))
    {
        pb(stack_a, stack_b, 0);
        return (0);
    }
    if (!(ft_strncmp(line, "ra", 2)))
    {
        ra(stack_a, 0);
        return (0);
    }
    if (!(ft_strncmp(line, "rra", 3)))
    {
        rra(stack_a, 0);
        return (0);
    }
    if (!(ft_strncmp(line, "sa", 2)))
    {
        sa(stack_a, 0);
        return (0);
    }
    return (1);
}

void printf_oko(t_node **stack_a, t_node **stack_b)
{
    if (sorted_stack(stack_a))
        write(1, "OK\n", 3);
    else
        write(1, "KO\n", 3);
    if (*stack_a)
        free_stack(stack_a);
    if (*stack_b)
        free_stack(stack_b);
}

static t_node *compare_data_small_indexing(t_node **stack_a)
{
    t_node  *head;
    t_node  *min;
    int     has_min;
    
    head = *stack_a;
    min = NULL;
    has_min = 0;
    if (head)
    {
        while (head)
        {
            if ((head->index == -1) && (!has_min || head->data < min->data))
            {
                min = head;
                has_min = 1;
            }
            head = head->next;
        }
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
    char    *line;

    if (ac < 2)
        ft_print_error(1);
    ft_check_error(ac, av);
    stack_a = (t_node **)malloc(sizeof(t_node));
    stack_b = (t_node **)malloc(sizeof(t_node));
    *stack_a = NULL;
    *stack_b = NULL;
    line = "1";
    stackinit(stack_a, ac, av); //stact_a에 av값들 쌓기
    while (line)
    {
        line = get_next_line(0);
        if (line)
        {
            if (command(line, stack_a, stack_b))
                ft_print_error(1);
        }
        free(line);
    }
    // printf("stack_a : %d\n", (*stack_a)->index);
    // printf("stack_a : %d\n", (*stack_a)->next->index);
    // printf("stack_a : %d\n", (*stack_a)->next->next->index);
    // printf("stack_a : %d\n", (*stack_a)->next->next->next->index);
    printf_oko(stack_a, stack_b);
    return (0);
}