CC		= gcc
NAME	= not_mg
SRC		= main.c			\
		  readfile.c		\
		  aff_map.c			\
		  readline.c		\
		  my_strlen.c		\
		  my_tablen.c		\
	 	  my_putstr.c		\
	  	  my_putchar.c
OBJ	= $(SRC:%.c=%.o)
RM	= rm -f

all:		$(NAME)
	./$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(OBJ) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:				clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re