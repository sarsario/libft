#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char *the_int;

    the_int = ft_itoa(1);
    if (!the_int)
        printf("itoa(1) is NULL\n");
    else
        printf("itoa(1) = %s\n", the_int);
    free(the_int);
    the_int = ft_itoa(-1);
    if (!the_int)
        printf("itoa(-1) is NULL\n");
    else
        printf("itoa(-1) = %s\n", the_int);
    free(the_int);
    the_int = ft_itoa(0);
    if (!the_int)
        printf("itoa(0) is NULL\n");
    else
        printf("itoa(0) = %s\n", the_int);
    free(the_int);
    the_int = ft_itoa(-12);
    if (!the_int)
        printf("itoa(-12) is NULL\n");
    else
        printf("itoa(-12) = %s\n", the_int);
    free(the_int);
    the_int = ft_itoa(-2147483648);
    if (!the_int)
        printf("itoa(-2147483648) is NULL\n");
    else
        printf("itoa(-2147483648) = %s\n", the_int);
    free(the_int);
    the_int = ft_itoa(2147483647);
    if (!the_int)
        printf("itoa(2147483647) is NULL\n");
    else
        printf("itoa(2147483647) = %s\n", the_int);
    free(the_int);
    return (0);
}
