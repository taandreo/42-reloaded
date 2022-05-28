.PHONY: libft.a all clean fclean re

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I includes

NAME = ft_display_file

SRCS = $(wildcard srcs/*.c)
# OBJS = $(SRCS:.c=.o)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $@

all: $(NAME)

clean: 
	rm -f $(NAME)

fclean: clean

re: fclean all

log:
	@echo $(SRCS)
	@echo $(OBJS)
	@echo $(CFLAGS)