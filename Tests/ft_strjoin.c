#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    // When s1 and s2 correct.
    char    *s1 = "First, ";
    char    *s2 = "last.";
    char    *join_s1_s2 = ft_strjoin(s1, s2);
    if (!join_s1_s2)
		printf("join_s1_s2 is NULL\n");
	else
	{
        printf("ft_strlen(s1) + ft_strlen(s2) = %zu\n",
            ft_strlen(s1) + ft_strlen(s2));
        printf("ft_strlen(join) = %zu\n", ft_strlen(join_s1_s2));
		printf("join_s1_s2 = %s\n", join_s1_s2);
		free(join_s1_s2);
	}
    return (0);
}
