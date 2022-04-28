NAME	= phone_book

CC		= clang++ -std=c++98

HEADER	= phone_book.hpp

SRCS	= *.cpp

RM		= rm -rf

CFLAGS	= -Wall -Werror -Wextra

OBJS	= *.o

all:	${NAME}

$(NAME): $(SRCS) $(HEADER)
					$(CC) $(CFLAGS) -c $(SRCS)
					$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean:
					${RM} ${OBJS}
fclean:				clean
					${RM} ${NAME}
re:					fclean all
.PHONY:				all clean fclean re