# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avitolin <avitolin@students.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 16:30:40 by avitolin          #+#    #+#              #
#    Updated: 2021/12/15 16:30:44 by avitolin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = \
	push_swap.c push_swap_utils.c instructions.c sort.c sort_utils.c \
	sort_x_utils.c
BSOURCES = \
	checker.c push_swap_utils.c instructions.c get_next_line.c
OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: push_swap

bonus: push_swap checker

push_swap: $(OBJECTS) libft
	gcc -o $@ $(OBJECTS) -Llibft -lft

checker: $(BOBJECTS) libft
	gcc -o $@ $(BOBJECTS) -Llibft -lft

%.o: %.c
	$(CC) -c $(CFLAGS) $?

libft:
	make -C libft bonus

clean:
	rm -f $(OBJECTS) $(BOBJECTS)
	make -C libft clean

fclean: clean
	rm -f push_swap checker libft/libft.a

re: fclean all

.PHONY: all bonus libft clean fclean re
