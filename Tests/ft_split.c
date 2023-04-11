#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int	i;
	// When s starts and ends with char != c
    char	*s;
    char    c;

    s = "One cTwo cThree cFour cFive";
    c = 'c';
	printf("s = %s\n", s);
    char	**split = ft_split(s, c);
	if (!split)
		printf("split is NULL\n");
	else
	{
		i = 0;
		while (split[i])
		{
			printf("split[%i] = %s\n", i, split[i]);
			free(split[i]);
			i++;
		}
		free(split);
	}

	// When s ends with char == c
	char	*s2;
    char    c2;

    s2 = "One cTwo cThree cFour c";
    c2 = 'c';
	printf("s2 = %s\n", s2);
    char	**split2 = ft_split(s2, c2);
	if (!split2)
		printf("split2 is NULL\n");
	else
	{
		i = 0;
		while (split2[i])
		{
			printf("split2[%i] = %s\n", i, split2[i]);
			printf("ft_strlen = %zu\n", ft_strlen(split2[i]));
			free(split2[i]);
			i++;
		}
		free(split2);
	}
    return (0);
}
