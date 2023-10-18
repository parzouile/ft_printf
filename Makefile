
SRCS = ft_printf.c ft_convert_hexa.c ft_put.c ft_strlen.c main.c
OBJS = ${SRCS:.c=.o}
LIB = jean
CC = gcc
CFLAGS = -Wall -Werror -Wextra 

.c.o:
		${CC} ${CFLAGS}  -c $< -o ${<:.c=.o}

${LIB}:	${OBJS}
		ar -rsc ${LIB} ${OBJS}

all: 	${LIB}

clean:	
		rm -f ${OBJS} 

fclean:	clean;
		rm -f ${LIB}

re:	fclean all


.PHONY: all clean fclean re */