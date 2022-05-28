.PHONY: libft.a all clean fclean re

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I includes

NAME = libft.a

SRCS = $(wildcard srcs/*.c)
OBJS = $(SRCS:.c=.o)

%.o: srcs/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

log:
	@echo $(SRCS)
	@echo $(OBJS)
	@echo $(CFLAGS)