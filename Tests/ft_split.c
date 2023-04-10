#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	count_words(char *s, char c)
{
	int	words;

	words = 0;
	while (ft_strchr(s, c))
	{
		s = ft_strchr(s, c) + 1;
		words++;
	}
	if (!*s)
		return (words);
	return (words + 1);
}

int main(void)
{
    char	*end;
	int		words;
    char    c;

    end = "One cTwo cThree cFour cFive";
    c = 'c';
    words =count_words(end, c);
    printf("words = %i\n", words);
    return (0);
}
