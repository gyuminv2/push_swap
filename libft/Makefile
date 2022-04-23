SRCS = ft_atoll.c\
		ft_is_digit.c\
		ft_lstadd_back.c\
		ft_lstadd_front.c\
		ft_lstlast.c\
		ft_lstnew.c\
		ft_lstsize.c\
		ft_split.c\
		ft_str_free.c\
		ft_str_is_digit.c\

OBJS = ${SRCS:.c=.o}

NAME = libft.a
CC = gcc
CFLAG = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAG) -c $(SRCS) -I./
		$(AR) $@ $^

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re