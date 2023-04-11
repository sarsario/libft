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
			printf("split[%i] = |%s|\n", i, split[i]);
			free(split[i]);
			i++;
		}
		free(split);
	}
	printf("=========================================\n");

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
			printf("split2[%i] = |%s|\n", i, split2[i]);
			free(split2[i]);
			i++;
		}
		free(split2);
	}
	printf("=========================================\n");

	// When s starts with char == c
	char	*s3;
    char    c3;

    s3 = "cTwo cThree cFour c";
    c3 = 'c';
	printf("s3 = %s\n", s3);
    char	**split3 = ft_split(s3, c3);
	if (!split3)
		printf("split3 is NULL\n");
	else
	{
		i = 0;
		while (split3[i])
		{
			printf("split3[%i] = |%s|\n", i, split3[i]);
			free(split3[i]);
			i++;
		}
		free(split3);
	}
	printf("=========================================\n");

	// When s contains multiple char == c one after another
	char	*s4;
    char    c4;

    s4 = "cTwo ccThree cFour c";
    c4 = 'c';
	printf("s4 = %s\n", s4);
    char	**split4 = ft_split(s4, c4);
	if (!split4)
		printf("split4 is NULL\n");
	else
	{
		i = 0;
		while (split4[i])
		{
			printf("split4[%i] = |%s|\n", i, split4[i]);
			free(split4[i]);
			i++;
		}
		free(split4);
	}
    return (0);
}
