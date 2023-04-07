#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int test_cases[9] = {-1, 0, 31, 32, 64, 100, 126, 127, 128};
    int expected[9];

    for (int i = 0; i < 8; i++)
    {
        expected[i] = isascii(test_cases[i]);
        if (ft_isascii(test_cases[i]) != expected[i])
        {
            printf("ft_isascii failed test case %d\n", i);
            return 1;
        }
    }

    printf("All tests passed!\n");
    return 0;
}
