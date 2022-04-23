#include "../push_swap.h"

int	ft_str_is_digit(char *str)
{
    int i;

    i = 0;
	if (str[i] == '-' && ft_is_digit(str[i + 1]))
        i++;
    if (str[i] == '+' && ft_is_digit(str[i + 1]))
        i++;
    while (str[i])
    {
        if (!ft_is_digit(str[i]))
            return (0);
        i++;
    }
    return (1);
}