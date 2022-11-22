NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = 	srcs/main.c \
		srcs/sort.c \
		srcs/rev_rotate.c \
		srcs/find_min_and_max.c \
		srcs/utils.c srcs/utils2.c\
		srcs/sorted.c srcs/find_index.c \
		srcs/exit_all.c srcs/stack_utils.c 
		srcs/swap.c srcs/push.c srcs/rotate.c \
		srcs/parse_args.c srcs/ft_split_spaces.c \

OBJ = $(SRC:.c=.o)

INCDIR = header/

MAKEFLAGS += --no-print-directory

all: $(NAME)

$(NAME) : $(OBJ)
	@echo "Compiling push_swap :"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Yes"

.c.o:
	@${CC} ${CFLAGS} -I $(INCDIR) -c $< -o $@

clean:
	@echo "Deleting push_swap OBJ files :"
	@rm -f $(OBJ)
	@echo "Yes"

fclean: clean
	@echo "Deleting push_swap :"
	@rm -f $(NAME)
	@echo "Yes"

re: fclean all