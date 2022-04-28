NAME	=	ScavTrap

CC		=	c++ -std=c++98

HEADER	=	*.hpp

SRCS	=	*.cpp

RM		=	rm -rf

CFLAGS	=	-Werror -Wall -Wextra

OBJ		=	*.o

all:	${NAME}

$(NAME): $(SRCS) $(HEADER)
					$(CC) $(CFLAGS) -c $(SRCS)
					$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean:
					${RM} ${OBJ}
fclean:				clean
					${RM} ${NAME}
re:					fclean all
.PHONY:				all clean fclean re


