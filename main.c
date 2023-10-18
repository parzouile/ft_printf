#include "ft_printf.h"
#include "stdio.h"


int main (void)
{
    ///printf ("\n%d" ,printf("gay  = %x", 12354));
    ///printf ("\n%d" ,ft_printf("gay  = %x", 12354));
    int b = 1;
    int *a = &b;
    ft_printf("1 %c | 2 %s | 3 %% | 4 %p | 5 %d | 6 %u | 7 %i | 8 %x | 9 %X \n", 'c', "jean", a, 432, 43646, 11, 42, 42);
    return 0;
}

/*
SRCS = ft_printf.c ft_convert_hexa.c ft_put.c ft_strlen.c main.c

CFLAGS = -Wall -Werror -Wextra 
CC = gcc
Name = jean
OBJS = ${SRCS:.c=.o}

all: ${Name}

${Name} : ${OBJS}
	${CC} ${OBJS} ${Name} 

%.o: %.c 
		${CC} ${CFLAGS} -c $< -o $@


clean:	
		rm -f ${OBJS} 

fclean:	clean;
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re 
*/