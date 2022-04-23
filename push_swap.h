#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

     # include <stdio.h>

# define BUFFER_SIZE 100

typedef struct  s_node
{
    struct s_node	*next;
	int				data;
    int             index;
}			t_node;

// pre_process
int         ft_av_repeat(char *av[], int num, int i);
void        ft_print_error(int e);
void        ft_check_error(int ac, char *av[]);
int         sorted_stack(t_node **stack_a);

//  MAIN
void        ft_print_error(int e);
void        numbering_stack(t_node **stack_a);
void        sort_stack(t_node **stack_a, t_node **stack_b, int ac);

//  LIBFT
long long   ft_atoll(const char *str);
int         ft_is_digit(int c);
void        ft_lstadd_back(t_node **stack, t_node *new);
void        ft_lstadd_front(t_node **stack, t_node *new);
t_node      *ft_lstlast(t_node *head);
t_node      *ft_lstnew(int data);
int         ft_lstsize(t_node *head);
char        **ft_split(char const *s, char c);
void        ft_str_free(char **str);
int         ft_str_is_digit(char *str);
char        *get_next_line(int fd);
char        *ft_strjoin(char *s1, char *s2);
char        *ft_strchr(char *s, int c);
void        *ft_calloc(size_t count, size_t size);
void	    ft_memset(void *b, size_t len);
size_t	    ft_strlen(char *s);
int         ft_strncmp(const char *s1, const char *s2, size_t n);

//  COMMAND
void        pa(t_node **stack_a, t_node **stack_b, int n);
void        pb(t_node **stack_a, t_node **stack_b, int n);

void        ra(t_node **stack_a, int n);

void        rra(t_node **stack_a, int n);

void        sa(t_node **stack_a, int n);
//  SORT
int         get_min_data(t_node **stack, int state);
void        sort_idx_3(t_node **stack_a);
void        sort_idx_5(t_node **stack_a, t_node **stack_b);
void        small_sort(t_node **stack_a, t_node **stack_b);

int         get_top_bit(t_node **stack_a);
void        radix_sort(t_node **stack_a, t_node **stack_b);

// list_stack
void        stackinit(t_node **stack_a, int ac, char *av[]);
void        free_stack(t_node **stack);
int         where_min(t_node **stack, int state);

#endif