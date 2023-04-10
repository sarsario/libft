#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Targeting 'am'
    char    *s1 = "I am a normal string.";
    char	*sub1;
	sub1 = ft_substr(s1, 2, 2);
	printf("sub1 = %s\n", sub1);
	free(sub1);

	return (0);
}
