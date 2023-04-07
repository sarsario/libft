// #include "../libft.h"
// #include <stdio.h>
// #include <string.h>

// void	test_memchr(void *func(const void *, int, size_t), char *func_name)
// {
// 	char	str[100] = "Hello World!";
// 	char	*res;

// 	printf("Testing %s:\n", func_name);
// 	res = (char *)func(str, 'W', 12);
// 	if (res != NULL && strncmp(res, "World!", 6) == 0)
// 		printf("Test 1 passed\n");
// 	else
// 		printf("Test 1 failed\n");

// 	res = (char *)func(str, 'Z', 12);
// 	if (res == NULL)
// 		printf("Test 2 passed\n");
// 	else
// 		printf("Test 2 failed\n");

// 	res = (char *)func(str, 'o', 3);
// 	if (res == NULL)
// 		printf("Test 3 passed\n");
// 	else
// 		printf("Test 3 failed\n");

// 	res = (char *)func(str, '!', 12);
// 	if (res != NULL && strncmp(res, "!", 1) == 0)
// 		printf("Test 4 passed\n");
// 	else
// 		printf("Test 4 failed\n");

// 	res = (char *)func(str, 'H', 0);
// 	if (res == NULL)
// 		printf("Test 5 passed\n");
// 	else
// 		printf("Test 5 failed\n");

// 	printf("\n");
// }

// int	main(void)
// {
// 	test_memchr(&ft_memchr, "ft_memchr");
// 	test_memchr(&memchr, "memchr");
// 	return (0);
// }

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main()
{
	char str1[] = "Hello, world!";
	char str2[] = "abcdefghijklmnopqrstuvwxyz";
	char str3[] = "";
	char str4[] = {0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f};
	char *res1, *res2, *res3, *res4;

	res1 = memchr(str1, 'o', 10);
	if (ft_memchr(str1, 'o', 10) != res1)
		printf("Test 1 failed\n");
	res2 = memchr(str2, 'k', 26);
	if (ft_memchr(str2, 'k', 26) != res2)
		printf("Test 2 failed\n");
	res3 = memchr(str3, 'x', 0);
	if (ft_memchr(str3, 'x', 0) != res3)
		printf("Test 3 failed\n");
	res4 = memchr(str4, 0x7f, 50);
	if (ft_memchr(str4, 0x7f, 50) != res4)
		printf("Test 4 failed\n");
	printf("All tests passed!\n");
	return (0);
}
