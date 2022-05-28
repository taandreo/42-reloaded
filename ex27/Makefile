.PHONY: libft.a all clean fclean re

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = ft_display_file

SRCS = $(wildcard srcs/*.c)
# OBJS = $(SRCS:.c=.o)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $@

all: $(NAME)

clean:
	@echo -n
	
fclean:
	rm -f $(NAME)

re: fclean all

log:
	@echo $(SRCS)
	@echo $(OBJS)
	@echo $(CFLAGS)