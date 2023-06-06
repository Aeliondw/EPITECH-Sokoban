##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## my_sokoban Project
##

NAME = my_sokoban

SRC = src/my_sokoban.c \
	src/handle_file.c \
	src/flag_h.c \
	src/err_map.c \
	src/count_p_o_x.c \
	src/str_to_word_array.c \
	src/start_gameplay.c \
	src/init_struct.c \
	src/find_p.c \
	src/move.c \
	src/print_map.c \
	src/save_o.c

OBJ = $(SRC.c=.o)

all :	$(NAME)

$(NAME) :	$(OBJ)
	@echo "Compile"
	gcc -o $(NAME) $(SRC) -lncurses -g3

clean :
	rm -rf $(OBJ)
	rm -f *~
	rm -f ./*~
	rm -f include/*~

cleanv :
	rm -rf vgcore.*

fclean :	clean cleanv
	rm -rf $(NAME)

re :	fclean all
