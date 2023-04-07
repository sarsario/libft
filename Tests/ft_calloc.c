#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define TEST_COUNT 5

typedef struct {
    size_t count;
    size_t size;
} TestParams;

int main(void)
{
    int failures = 0;
    TestParams tests[TEST_COUNT] = {
        {0, 0},
        {10, sizeof(int)},
        {100, sizeof(char)},
        {50, sizeof(double)},
        {sizeof(float), sizeof(float)}
        // {SIZE_MAX, SIZE_MAX}
        // {SIZE_MAX - 1, SIZE_MAX - 1},
        // {SIZE_MAX / sizeof(int), sizeof(int)},
        // {SIZE_MAX / sizeof(char), sizeof(char)}
    };
    void *ptr1, *ptr2;

    for (int i = 0; i < TEST_COUNT; i++) {
        ptr1 = ft_calloc(tests[i].count, tests[i].size);
        ptr2 = ft_calloc(tests[i].count, tests[i].size);
        if (ft_memcmp(ptr1, ptr2, tests[i].count * tests[i].size) != 0) {
            printf("Test failed: count=%zu, size=%zu\n", tests[i].count,
                tests[i].size);
            failures++;
        }
        free(ptr1);
        free(ptr2);
    }
    if (failures == 0)
        printf("All tests passed!\n");
    return 0;
}
