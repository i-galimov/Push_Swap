# _____________________________________________________________________VARIABLES
	# COLORS_TEXT
RED	=	\033[0;31m
CYAN	=	\033[0;36m
COL_0					:=	\033[38;2;0;145;15
COL_1					:=	\033[38;2;46;84;240
COL_2					:=	\033[37
UNSET					:=	\033[m

NAME					:=	push_swap

CC						:=	clang
OBJ_DIR					:=	obj
FLAGS					:=	-Wall -Wextra -Werror -g
INCLUDE					:=	include

VPATH					:=	src \
							utils

SRC						:=	list_ops.c \
							main.c \
							parsing_arg.c \
							reverse_rotate.c \
							rotate.c \
							sort3.c \
							split.c \
							sx-px.c \
							sort_array.c \
							sort5.c \
							sort_all.c \
							list_ops2.c \
							utils.c 

OBJ						:=	$(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.c=.o)))
# _______________________________________________________________________TARGETS

.PHONY : all clean fclean re check_obj_dir

all						:	$(OBJ_DIR) $(NAME)

$(NAME)					:	$(OBJ)
							@echo " $(CYAN)\033[1m----------------------------------------------------"
							@echo "| $(CYAN)\033[1m╔╗╔╗╔╗╔═══╗╔╗──╔══╗╔══╗╔╗──╔╗╔═══╗───╔════╗╔══╗───|" 
							@echo "| ║║║║║║║╔══╝║║──║╔═╝║╔╗║║║──║║║╔══╝───╚═╗╔═╝║╔╗║───|"  
							@echo "| ║║║║║║║╚══╗║║──║║──║║║║║╚╗╔╝║║╚══╗─────║║──║║║║───|" 
							@echo "| ║║║║║║║╔══╝║║──║║──║║║║║╔╗╔╗║║╔══╝─────║║──║║║║───|" 
							@echo "| ║╚╝╚╝║║╚══╗║╚═╗║╚═╗║╚╝║║║╚╝║║║╚══╗─────║║──║╚╝║───|" 
							@echo "| ╚═╝╚═╝╚═══╝╚══╝╚══╝╚══╝╚╝──╚╝╚═══╝─────╚╝──╚══╝───|"
							@echo "|             $(RED)\033[1m╔═══╗─────╔╗──╔═══╗           	    |"
							@echo "|             $(RED)\033[1m║╔═╗║─────║║──║╔═╗║           	    |"
							@echo "|             $(RED)\033[1m║╚═╝╠╗╔╦══╣╚═╗║╚══╦╗╔╗╔╦══╦══╗        |"
							@echo "|             $(RED)\033[1m║╔══╣║║║══╣╔╗║╚══╗║╚╝╚╝║╔╗║╔╗║        |"
							@echo "|             $(RED)\033[1m║║──║╚╝╠══║║║║║╚═╝╠╗╔╗╔╣╔╗║╚╝║	    |"
							@echo "|             $(RED)\033[1m╚╝──╚══╩══╩╝╚╝╚═══╝╚╝╚╝╚╝╚╣╔═╝        |"
							@echo "|             $(RED)\033[1m──────────────────────────║║	    |"
							@echo "|             $(RED)\033[1m──────────────────────────╚╝          |"
							@echo " $(RED)\033[1m----------------------------------------------------$(RED)"
							@say Hello peer. I am phella. Welcome to my project Push Swap! &
							@$(CC) $(OBJ) $(LIBS) -o $@
							@echo "$(COL_0);1m"
							@echo "\t\tCOMMAND + V"
							@echo "$(UNSET)"
							@printf "$(shell pwd)/$@ " | pbcopy

$(OBJ_DIR)/%.o			:	%.c
							$(CC) $(FLAGS) -I $(INCLUDE) -c $< -o $@

$(OBJ_DIR)				:
							@mkdir -p $(OBJ_DIR)/

# ________________________________________________________________CLEANS TARGETS

clean					:
							@rm -rf $(OBJ_DIR)
							@echo "$(COL_1);3;1mobject\033[23;22m files for \033[3;1m$(NAME)\033[23;22m have been deleted\033[0m"

fclean					:	clean
							@rm -f $(NAME)
							@echo "$(COL_1);3;1m$(NAME)\033[23;22m have been deleted\033[0m"

re						:	fclean all
