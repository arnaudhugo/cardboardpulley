CC      = gcc
NAME    = not_mg
SRC     = my_putchar.c
OBJ     = $(SRC:%.c=%.o)
RM      = rm -f

$(NAME):	$(OBJ)
		ar r $(NAME) $(OBJ)
		ranlib $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:			clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re