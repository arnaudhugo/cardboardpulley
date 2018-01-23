CC		= gcc
NAME	= not_mg
SRC		= main.c			\
		  aff_map.c			\
	  	  readline.c		\
	 	  my_putstr.c		\
	  	  my_putchar.c
OBJ	= $(SRC:%.c=%.o)
RM	= rm -f

$(NAME):	$(OBJ)
			$(CC) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJ)

fclean:				clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re