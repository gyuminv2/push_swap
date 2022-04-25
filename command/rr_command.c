#include "../push_swap.h"

void    rra(t_node **stack_a, int n)
{
    t_node  *head;
    t_node  *tail;

    head = *stack_a;
    tail = ft_lstlast(*stack_a);
    while (head)
    {
        if (head->next->next == NULL)
        {
            head->next = NULL;
            break;
        }
        head = head->next;
    }
    tail->next = *stack_a;
    *stack_a = tail;
    if (n == 1)
        write(1, "rra\n", 4);
}
