#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    // Trim start and end.
    char    *s = "\t\t\nHehe.\nSome\tsneaking.\n\t\n";
    char    *set = "\t\n";
    char    *trimmed = ft_strtrim(s, set);
    if (!trimmed)
        printf("trimmed is NULL\n");
    else
    {
        printf("trimmed = %s\n", trimmed);
        printf("ft_strlen(trimmed) = %zu\n", ft_strlen(trimmed));
        free(trimmed);
    }

    // Trim when set = ""
    char    *set2 = "";
    char    *trim2 = ft_strtrim(s, set2);
    if (!trim2)
        printf("trim2 is NULL\n");
    else
    {
        printf("trim2 = %s\n", trim2);
        printf("ft_strlen(trim2) = %zu\n", ft_strlen(trim2));
        free(trim2);
    }
    return (0);
}
