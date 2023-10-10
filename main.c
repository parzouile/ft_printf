#include "ft_printf.h"
#include "stdio.h"

int addition( int counter, ... ) {

    int sum = 0;
    int tmp;
    va_list parametersInfos;
    /* Initialize the va_list structure */
    va_start( parametersInfos, counter );

    /* for all unnamed integer, do an addition */
    while( counter > 0 ) {

        /* Extraction of the next integer */
        tmp = va_arg( parametersInfos, int );
        if (!tmp)
            printf("NULL\n");
        else
            printf( "%d\n", tmp);
        counter --;
    }

    /* Release va_list resources */
    va_end( parametersInfos );

    return sum;
}
int main (void)
{
    printf ("\n%d" , printf(""));
}