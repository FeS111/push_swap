MAKEFLAGS += --no-builtin-rules
MAKEFLAGS += --no-builtin-variables

VPATH = src

# Compiler Variables
CC		= cc
CFLAGSS	= -Wall -Wextra -Werror -g
INCFLAG	= -I include -I printf
AR		= ar
ARFLAGS = -rcs
# File Variables
NAME	= push_swap
SRC		= $(addprefix src/, push_swap.c ft_stack_util.c ft_stack_util2.c ft_stack_util3.c ft_swap.c ft_push.c ft_rotate.c ft_reverse_rotate.c ft_util.c)
OBJ		= $(addprefix _bin/,$(notdir $(SRC:.c=.o)))

$(NAME): $(OBJ) | libft/libft.a
	$(CC) -o $(NAME) $(CFLAGSS) $(INCFLAG) $(OBJ) libft/libft.a

libft/libft.a: libft
	(cd libft && make && make clean)

libft:
	@if [ ! -d "libft" ]; then git clone https://github.com/fes111/libft.git; fi

_bin :
	mkdir _bin

_bin/%.o : %.c libft/libft.a | _bin
	$(CC) -c $(CFLAGSS) $(INCFLAG) $< -o $@

san: CFLAGSS += -fsanitize=address

san: re

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)
	(cd libft && make fclean)

re:		fclean all

all:	$(NAME)

.PHONY: clean fclean re all run