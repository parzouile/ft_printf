#include "ft_printf.h"
#include "stdio.h"


int main (void)
{
    ///printf ("\n%d" ,printf("gay  = %x", 12354));
    ///printf ("\n%d" ,ft_printf("gay  = %x", 12354));
    int b = 1;
    int *a = &b;
    ft_printf("faux = %p ", "jean");
    printf("\n");
    printf("vrai = %p  ", "jean");
    return 0;
}
