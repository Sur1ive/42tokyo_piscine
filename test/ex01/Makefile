SRCSDIR	= srcs/
INCDIR	= includes/
SRCS	= $(SRCSDIR)ft_putchar.c $(SRCSDIR)ft_swap.c $(SRCSDIR)ft_putstr.c $(SRCSDIR)ft_strlen.c $(SRCSDIR)ft_strcmp.c
TEST	= ft_putchar.c
OBJS	= $(SRCS:.c=.o)
NAME	= libft.a
CC		= cc
CFLAG	= -Wall -Wextra -Werror -c

.c.o:
	$(CC) $(CFLAG) $< -I $(INCDIR) -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS) $(NAME)

re: fclean all