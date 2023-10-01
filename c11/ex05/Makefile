SRCSDIR	= srcs/
SRCS	= $(SRCSDIR)do_op.c $(SRCSDIR)error.c $(SRCSDIR)ft_atoi.c $(SRCSDIR)main.c $(SRCSDIR)op.c
NAME	= ./do-op
CC		= cc
CFLAG	= -Wall -Wextra -Werror

$(NAME): $(SRCS)
	$(CC) $(CFLAG) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(SRCS:.c=.o)
fclean:	clean
	rm -rf $(NAME)