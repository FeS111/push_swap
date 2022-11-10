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
SRC		= $(addprefix src/, push_swap.c)
OBJ		= $(addprefix _bin/,$(notdir $(SRC:.c=.o)))

$(NAME): $(OBJ) | printf/libftprintf.a
	$(CC) -o $(NAME) $(CFLAGSS) $(INCFLAG) $(OBJ) printf/libftprintf.a

printf:
	@if [ ! -d "./printf" ]; then git clone https://github.com/fes111/printf.git; fi

printf/libftprintf.a: printf
	(cd printf && make && make clean)

_bin :
	mkdir _bin

_bin/%.o : %.c printf/libftprintf.a | _bin
	$(CC) -c $(CFLAGSS) $(INCFLAG) $< -o $@

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)
	@rm -rf libft

re:		fclean all

all:	$(NAME)

.PHONY: clean fclean re all run