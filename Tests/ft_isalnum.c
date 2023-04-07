#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

int test_isalnum(int c) {
    int ft_result = ft_isalnum(c);
    int std_result = isalnum(c);
    if (ft_result != std_result) {
        printf("Test failed for character %c (ASCII code %d):\n", c, c);
        printf("  ft_isalnum: %d\n", ft_result);
        printf("  isalnum:   %d\n", std_result);
        return 0;
    }
    return 1;
}

int main() {
    int num_tests = 0;
    int num_passed = 0;

    for (int i = 0; i < 128; i++) {
        if (test_isalnum(i)) {
            num_passed++;
        }
        num_tests++;
    }

    if (num_tests == num_passed) {
        printf("All tests passed!\n");
    } else {
        printf("%d out of %d tests failed.\n", num_tests - num_passed, num_tests);
    }

    return 0;
}
