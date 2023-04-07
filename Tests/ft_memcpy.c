#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

#define BUF_SIZE 10

void test_ft_memcpy(void)
{
    char src[BUF_SIZE] = "hello";
    char dest[BUF_SIZE] = "world";
    char dest2[BUF_SIZE] = "world";
    char *res_ft, *res_std;

    // Test with n = 0
    res_ft = ft_memcpy(dest, src, 0);
    res_std = memcpy(dest2, src, 0);
    if (memcmp(dest, dest2, BUF_SIZE) == 0)
        printf("[OK] ft_memcpy: %s, memcpy: %s\n", dest, dest2);
    else
        printf("[KO] ft_memcpy: %s, memcpy: %s\n", dest, dest2);

    // Test with src = NULL
    res_ft = ft_memcpy(dest, NULL, 5);
    res_std = memcpy(dest2, NULL, 5);
    if (memcmp(dest, dest2, BUF_SIZE) == 0)
        printf("[OK] ft_memcpy: %s, memcpy: %s\n", dest, dest2);
    else
        printf("[KO] ft_memcpy: %s, memcpy: %s\n", dest, dest2);

    // Test with dest = NULL
    res_ft = ft_memcpy(NULL, src, 5);
    res_std = memcpy(NULL, src, 5);
    if (res_ft == NULL && res_std == NULL)
        printf("[OK] ft_memcpy: %p, memcpy: %p\n", res_ft, res_std);
    else
        printf("[KO] ft_memcpy: %p, memcpy: %p\n", res_ft, res_std);

    // Test with normal inputs
    char src2[BUF_SIZE] = "hello";
    char dest3[BUF_SIZE] = "world";
    char dest4[BUF_SIZE] = "world";
    res_ft = ft_memcpy(dest3, src2, strlen(src2) + 1);
    res_std = memcpy(dest4, src2, strlen(src2) + 1);
    if (memcmp(dest3, dest4, BUF_SIZE) == 0)
        printf("[OK] ft_memcpy: %s, memcpy: %s\n", dest3, dest4);
    else
        printf("[KO] ft_memcpy: %s, memcpy: %s\n", dest3, dest4);
}

int	main(void)
{
	test_ft_memcpy();
	return (0);
}
