#include "../libft.h"
#include <string.h>
#include <stdio.h>

#define BUF_SIZE 10

void	test_ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int result_ft = ft_memcmp(s1, s2, n);
	int result_std = memcmp(s1, s2, n);
	if (result_ft == result_std)
		printf("[OK] ft_memcmp: %d, memcmp: %d\n", result_ft, result_std);
	else
		printf("[KO] ft_memcmp: %d, memcmp: %d\n", result_ft, result_std);
}

int main(void)
{
    // Test with two identical strings
    char buf1[BUF_SIZE] = "hello";
    char buf2[BUF_SIZE] = "hello";
    int res1 = ft_memcmp(buf1, buf2, strlen(buf1));
    int res2 = memcmp(buf1, buf2, strlen(buf1));
    printf("ft_memcmp(\"hello\", \"hello\", %zu) = %d, memcmp(\"hello\", \"hello\", %zu) = %d\n", strlen(buf1), res1, strlen(buf1), res2);

    // Test with two different strings
    char buf3[BUF_SIZE] = "world";
    char buf4[BUF_SIZE] = "hello";
    res1 = ft_memcmp(buf3, buf4, strlen(buf3));
    res2 = memcmp(buf3, buf4, strlen(buf3));
    printf("ft_memcmp(\"world\", \"hello\", %zu) = %d, memcmp(\"world\", \"hello\", %zu) = %d\n", strlen(buf3), res1, strlen(buf3), res2);

    // Test with two strings that differ in the last character
    char buf5[BUF_SIZE] = "hello";
    char buf6[BUF_SIZE] = "hellp";
    res1 = ft_memcmp(buf5, buf6, strlen(buf5));
    res2 = memcmp(buf5, buf6, strlen(buf5));
    printf("ft_memcmp(\"hello\", \"hellp\", %zu) = %d, memcmp(\"hello\", \"hellp\", %zu) = %d\n", strlen(buf5), res1, strlen(buf5), res2);

    // Test with n = 0
    char buf7[BUF_SIZE] = "hello";
    char buf8[BUF_SIZE] = "world";
    res1 = ft_memcmp(buf7, buf8, 0);
    res2 = memcmp(buf7, buf8, 0);
    printf("ft_memcmp(\"hello\", \"world\", 0) = %d, memcmp(\"hello\", \"world\", 0) = %d\n", res1, res2);

    char buf9[BUF_SIZE] = "abcdefghij";
    char buf10[BUF_SIZE] = "abcdefgiyz";
    res1 = ft_memcmp(buf9, buf10, 7);
    res2 = memcmp(buf9, buf10, 7);
    printf("ft_memcmp(\"abcdefghij\", \"abcdefgxyz\", 0) = %d, memcmp(\"abcdefghij\", \"abcdefgxyz\", 0) = %d\n", res1, res2);

    return 0;
}
