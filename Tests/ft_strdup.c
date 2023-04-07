#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	// Test working example
	char *str = "Hello, world!";
	char *dup = ft_strdup(str);
	printf("%s\n", dup); // prints "Hello, world!"
	free(dup);

    char *str1 = "";
    char *str2 = "hello world";
    // char *str3 = NULL;
    char *str4 = "a\0bc\0def\0ghij";
    char *str5 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    char *str6 = "This string is exactly 15 characters.";
    char *str7 = "The quick brown fox jumps over the lazy dog.";

    char *dup1 = ft_strdup(str1);
    char *dup2 = ft_strdup(str2);
    // char *dup3 = ft_strdup(str3);
    char *dup4 = ft_strdup(str4);
    char *dup5 = ft_strdup(str5);
    char *dup6 = ft_strdup(str6);
    char *dup7 = ft_strdup(str7);

	char *strdup1 = strdup(str1);
    char *strdup2 = strdup(str2);
    //char *strdup3 = strdup(str3);
    char *strdup4 = strdup(str4);
    char *strdup5 = strdup(str5);
    char *strdup6 = strdup(str6);
    char *strdup7 = strdup(str7);

	if (ft_memcmp(dup1, str1, ft_strlen(str1)))
	{
		printf("str1 = %s\n", str1);
		printf("dup1 = %s\n\n", dup1);
	}
	free(dup1);
	if (ft_memcmp(dup2, str2, ft_strlen(str2)))
	{
		printf("str2 = %s\n", str2);
		printf("dup2 = %s\n\n", dup2);
	}
	free(dup2);
	// if (ft_memcmp(dup3, str3, ft_strlen(str3)))
	// {
	// 	printf("str3 = %s\n", str3);
	// 	printf("dup3 = %s\n\n", dup3);
	// }
	// free(dup3);
	if (ft_memcmp(dup4, str4, ft_strlen(str4)))
	{
		printf("str4 = %s\n", str4);
		printf("dup4 = %s\n\n", dup4);
	}
	free(dup4);
	if (ft_memcmp(dup5, str5, ft_strlen(str5)))
	{
		printf("str5 = %s\n", str5);
		printf("dup5 = %s\n\n", dup5);
	}
	free(dup5);
	if (ft_memcmp(dup6, str6, ft_strlen(str6)))
	{
		printf("str6 = %s\n", str6);
		printf("dup6 = %s\n\n", dup6);
	}
	free(dup6);
	if (ft_memcmp(dup7, str7, ft_strlen(str7)))
	{
		printf("str7 = %s\n", str7);
		printf("dup7 = %s\n\n", dup7);
	}
	free(dup7);
	if (ft_memcmp(strdup1, str1, ft_strlen(str1)))
	{
		printf("str1 = %s\n", str1);
		printf("dup1 = %s\n\n", strdup1);
	}
	free(strdup1);
	if (ft_memcmp(strdup2, str2, ft_strlen(str2)))
	{
		printf("str2 = %s\n", str2);
		printf("dup2 = %s\n\n", strdup2);
	}
	free(strdup2);
	// free(strdup3);
	if (ft_memcmp(strdup4, str4, ft_strlen(str4)))
	{
		printf("str4 = %s\n", str4);
		printf("dup4 = %s\n\n", strdup4);
	}
	free(strdup4);
	if (ft_memcmp(strdup5, str5, ft_strlen(str5)))
	{
		printf("str5 = %s\n", str5);
		printf("dup5 = %s\n\n", strdup5);
	}
	free(strdup5);
	if (ft_memcmp(strdup6, str6, ft_strlen(str6)))
	{
		printf("str6 = %s\n", str6);
		printf("dup6 = %s\n\n", strdup6);
	}
	free(strdup6);
	if (ft_memcmp(strdup7, str7, ft_strlen(str7)))
	{
		printf("str7 = %s\n", str7);
		printf("dup7 = %s\n\n", strdup7);
	}
	free(strdup7);

	return (0);
}
