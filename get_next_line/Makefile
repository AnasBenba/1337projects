NAME = get.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = get_next_line.c get_next_line_utils.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rsc $(NAME) $(OBJ)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -r $(OBJ)
fclean: clean
	rm -r $(NAME)
re : fclean all
.PHONY: clean
