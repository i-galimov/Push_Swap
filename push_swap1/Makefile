NAME		=	push_swap
#
SOURSE		=	list_ops.c\
				reverse_rotate.c\
				rotate.c\
				sort3.c\
				split.c\
				sx-px.c\
				validator.c\
				validator2.c\
				errors.c\
				parsing_arg.c\
				main.c
# 
CFLAGS		= -Wall -Werror -Wextra -I $(HEADER)
HEADER		= push_swap.h

OBJ = $(SOURSE:%.c=%.o)
CC = gcc
#
.PHONY : all clean fclean re
#
all: $(NAME)
	@echo "Welcome to Push_Swap!"
	@say Hello peer. I am phella. Welcome to my project Push Swap! &
#
$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(SOURSE) -o $(NAME)
#
%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
#
clean :
	@rm -f $(OBJ)
#
fclean : clean
	@rm -f $(NAME)

re		:	fclean all
