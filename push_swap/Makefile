NAME = push_swap
CC =cc
RM = rm -rf
FLAGS = -Wall -Wextra -Werror
SRC = check_and_sort.c index.c init_and_checkerror.c push_swap.c \
	simple_sort.c sort.c utils_libft.c utils_libft2.c \
	./rules/push.c ./rules/swap.c ./rules/rotate.c ./rules/reverse_rotate.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
