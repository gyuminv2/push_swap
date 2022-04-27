SRCS = push_swap.c\
		pre_proc.c\
		sort/radix_sort.c\
		sort/small_sort.c\
		list_stack/list_stack.c\
		command/p_command.c\
		command/r_command.c\
		command/rr_command.c\
		command/s_command.c\
		libft/ft_atoll.c\
		libft/ft_is_digit.c\
		libft/ft_lstadd_back.c\
		libft/ft_lstadd_front.c\
		libft/ft_lstlast.c\
		libft/ft_lstnew.c\
		libft/ft_lstsize.c\
		libft/ft_split.c\
		libft/ft_str_free.c\
		libft/ft_str_is_digit.c

OBJS = ${SRCS:.c=.o}

NAME = push_swap
CC = gcc
CFLAG = -Wall -Wextra -Werror
\CFLAG = -fsanitize=address -g3
RM = rm -rf
LIBFTDIR = ./libft

all: $(NAME) 

$(NAME): $(OBJS)
		make -C $(LIBFTDIR)
		$(CC) $(CFLAG) $(SRCS) -o $(NAME)

clean:
		make clean -C $(LIBFTDIR)
		$(RM) $(OBJS)

fclean: clean
		make fclean -C $(LIBFTDIR)
		$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
