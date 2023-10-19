SRCS =  ft_convert_hexa.c  ft_printf.c   ft_put.c  ft_strlen.c 

OBJS = ${SRCS:.c=.o}
DEPS = ${SRCS:.c=.d}

LIB = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I ./

.c.o:
		${CC} ${CFLAGS} -MMD -c $< -o ${<:.c=.o}

${LIB}:	${OBJS}
		ar -rsc ${LIB} ${OBJS}

all: 	${LIB}

clean:	
		rm -f ${OBJS} ${DEPS}

fclean:	clean;
		rm -f ${LIB}

re:	fclean all

-include ${DEPS}

.PHONY: all clean fclean re 