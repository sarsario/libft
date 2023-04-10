#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	// Compare m and l correctly.
    char	*s1 = "C'est moi.";
    char	*s2 = "C'est lui.";
    int		cmp1 = ft_strncmp(s1, s2, 6);
    int		cmp2 = strncmp(s1, s2, 6);
    printf("s1[%i] = %c\n", 6, s1[6]);
    printf("s2[%i] = %c\n", 6, s2[6]);
    printf("ft_strncmp(s1, s2, %i) = %i\n", 6, cmp1);
    printf("strncmp(s1, s2, %i) = %i\n", 6, cmp2);

	// When s1 and s2 both NULL.
    char    *s3 = NULL;
	char	*s4 = NULL;
    int		cmp3 = ft_strncmp(s3, s4, 2);
    printf("ft_strncmp(s3, s4, %i) = %i\n", 2, cmp3);

	// When s1 not NULL and s2 NULL.
	char	*s5 = "Not null.";
	char	*s6 = NULL;
	int		cmp4 = ft_strncmp(s5, s6, 2);
	printf("s5[0] = %c\n", s5[0]);
    printf("ft_strncmp(s5, NULL, %i) = %i\n", 2, cmp4);

	// When s1 NULL and s2 not NULL.
	char	*s7 = NULL;
	char	*s8 = "Not null.";
	int		cmp5 = ft_strncmp(s7, s8, 2);
	printf("s8[0] = %c\n", s8[0]);
    printf("ft_strncmp(s8, NULL, %i) = %i\n", 2, cmp5);

	// When n < 0.
	char	*s9 = "Hello.";
	char	*s10 = "Hello.";
	int		cmp6 = ft_strncmp(s9, s10, -3);
	printf("ft_strncmp(s9, s10, %i) = %i\n", -3, cmp6);

    return (0);
}
