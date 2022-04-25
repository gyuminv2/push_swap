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

SRCS_CHECKER = checker.c\
				pre_proc.c\
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
				libft/ft_str_is_digit.c\
				libft/get_next_line.c\
				libft/get_next_line_utils.c\
				libft/ft_strncmp.c

OBJS = ${SRCS:.c=.o}
OBJS_CHECKER = ${SRCS_CHECKER:.c=.o}

NAME = push_swap
CHECKER = checker
CC = gcc
CFLAG = -Wall -Wextra -Werror
RM = rm -rf
LIBFTDIR = ./libft

all: $(NAME) $(CHECKER)

$(NAME): $(OBJS)
		make -C $(LIBFTDIR)
		$(CC) $(CFLAG) $(SRCS) -o $(NAME)

$(CHECKER): $(OBJS_CHECKER)
		$(CC) $(CFLAG) $(SRCS_CHECKER) -o $(CHECKER)

clean:
		make clean -C $(LIBFTDIR)
		$(RM) $(OBJS)
		$(RM) $(OBJS_CHECKER)

fclean: clean
		make fclean -C $(LIBFTDIR)
		$(RM) $(NAME)
		$(RM) $(CHECKER)

re : fclean all

bonus : all

.PHONY: all clean fclean re bonus