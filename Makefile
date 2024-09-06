MY_SOURCES = client.c server.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

all: server client

bonus: server client

server: server.o libft
	$(CC) -o $@ $< -Llibft -lft

client: client.o libft
	$(CC) -o $@ $< -Llibft -lft

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

libft:
	make -C libft

clean:
	rm -f $(MY_OBJECTS)
	make -C libft clean

fclean: clean
	rm -f server client libft/libft.a

re: fclean all

.PHONY: all libft clean fclean re
