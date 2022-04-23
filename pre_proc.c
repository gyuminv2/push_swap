#include "push_swap.h"
/*
    1. 정수가 아닌 값이 들어왔을때
    2. INT 범위 밖 값이 들어왔을때
    3. 정수가 중복해서 들어왔을때
    4. 인자가 없거나, 1개 또는 정렬이 된 채로 들어왔을때
    5. 공백(" ")이 들어왔을때
*/
int ft_av_repeat(char *av[], int num, int i)
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

void ft_print_error(int e)
{
    if (e == 2)
        write(2, "Error\n", 6);
    exit(1);                    //(1)에러메세지 종료
}

int sorted_stack(t_node **stack_a)
{
    t_node  *head;
    int     i;

    head = *stack_a;
    i = (*stack_a) -> index;
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

void    ft_check_error(int ac, char *av[])
{
    int     i;
    long    num;
    char    **save;

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
        if (!ft_str_is_digit(save[i]) || !ft_av_repeat(save, num, i))    // 1 , 2
            ft_print_error(2);
        i++;
    }
    if (ac == 2)
        ft_str_free(save);
}