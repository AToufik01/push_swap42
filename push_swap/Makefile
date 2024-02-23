NAME = push_swap
NAMEB = checker
CC =cc
RM = rm -rf
FLAGS = -Wall -Wextra -Werror

# SRC = check_and_sort.c index.c init_and_checkerror.c push_swap.c \
# 	simple_sort.c sort.c utils_libft.c utils_libft2.c \
# 	./rules/push.c ./rules/swap.c ./rules/rotate.c ./rules/reverse_rotate.c \

 SRCB = checker_bonus.c checker_utils_bonus.c index.c init_and_checkerror.c\
		utils_libft.c utils_libft2.c checker_utils1_bonus.c\
 		./rules/push.c ./rules/swap.c ./rules/rotate.c ./rules/reverse_rotate.c \
 		./gnl_bonus/get_next_line.c ./gnl_bonus/get_next_line_utils.c \

# OBJ = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)

all: $(NAME)

# $(NAME): $(OBJ)
# 	$(CC) $(FLAGS) $(OBJ) -o $(NAME)


bonus: $(OBJB)
	$(CC) $(FLAGS) $(OBJB) -o $(NAMEB)

%.o: %.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@
clean:
	$(RM) $(OBJ)
	$(RM) $(OBJB)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAMEB)

re: fclean all
