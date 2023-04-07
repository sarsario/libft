#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	char buf1[10], buf2[10];
	int failed = 0;

	// Test case 1: set entire buffer to zero using bzero
	bzero(buf1, sizeof(buf1));
	ft_bzero(buf2, sizeof(buf2));
	if (memcmp(buf1, buf2, sizeof(buf1)) != 0) {
		printf("Test case 1 failed.\n");
		failed = 1;
	}

	// Test case 2: set partial buffer to zero using bzero
	memcpy(buf1, "hello", 5);
	memcpy(buf2, "hello", 5);
	bzero(buf1 + 2, 2);
	ft_bzero(buf2 + 2, 2);
	if (memcmp(buf1, buf2, sizeof(buf1)) != 0) {
		printf("Test case 2 failed.\n");
		failed = 1;
	}

	// Test case 3: set zero bytes using bzero
    memcpy(buf1, "hello", 5);
    memcpy(buf2, "hello", 5);
    bzero(buf1, (0));
    ft_bzero(buf2, 0);
    if (memcmp(buf1, buf2, sizeof(buf1)) != 0) {
        printf("Test case 3 failed.\n");
        failed = 1;
    }

    // Test case 4: set zero bytes using ft_bzero
    memcpy(buf1, "hello", 5);
    memcpy(buf2, "hello", 5);
    ft_bzero(buf1, 0);
    ft_bzero(buf2, 0);
    if (memcmp(buf1, buf2, sizeof(buf1)) != 0) {
        printf("Test case 4 failed.\n");
        failed = 1;
    }

    // Test case 5: set buffer to non-zero values using bzero
    memcpy(buf1, "hello", 5);
    bzero(buf1, sizeof(buf1));
    ft_bzero(buf2, sizeof(buf2));
    if (memcmp(buf1, buf2, sizeof(buf1)) != 0) {
        printf("Test case 5 failed.\n");
        failed = 1;
    }

	if (!failed) {
		printf("All tests passed successfully.\n");
	}

	return failed;
}
