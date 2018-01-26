##
## Makefile for Cardboard Pulley in /home/arnaud/Documents/cardboard_pulley
## 
## Made by ARNAUD Hugo
## Login   <arnaud_h@etna-alternance.net>
## 
## Started on  Mon Jan  22 09:47:41 2018 ARNAUD Hugo
## Last update Mon Jan  22 09:48:04 2018 ARNAUD Hugo
##
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