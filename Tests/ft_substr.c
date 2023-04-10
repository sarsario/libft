#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Targeting 'am'
    char    *s1 = "I am a normal string.";
    char	*sub1;
	sub1 = ft_substr(s1, 2, 2);
	if (!sub1)
		printf("sub1 is NULL\n");
	else
	{
		printf("sub1 = %s\n", sub1);
		free(sub1);
	}

	// Start is bigger than ft_strlen(s)
	char	*sub2;
	sub2 = ft_substr(s1, 22, 2);
	if (!sub2)
		printf("sub2 is NULL\n");
	else
	{
		printf("sub2 = %s\n", sub2);
		free(sub2);
	}

	// s is NULL
	char	*s2 = NULL;
	char	*sub3 = ft_substr(s2, 3, 3);
	if (!sub3)
		printf("sub3 is NULL\n");
	else
	{
		printf("sub3 = %s\n", sub3);
		free(sub3);
	}

	// Targeting last letter
	char	*sub4 = ft_substr(s1, 20, 1);
	if (!sub4)
		printf("sub4 is NULL\n");
	else
	{
		printf("sub4 = %s\n", sub4);
		free(sub4);
	}

	return (0);
}
