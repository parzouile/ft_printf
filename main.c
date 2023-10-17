#include "ft_printf.h"
#include "stdio.h"


int main (void)
{
    ///printf ("\n%d" ,printf("gay  = %x", 12354));
    ///printf ("\n%d" ,ft_printf("gay  = %x", 12354));
    ft_printf("gay  = %c et %s", 'c', "jean");
    
    return 0;
}