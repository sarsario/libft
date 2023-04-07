#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

void	test_isalpha(void)
{
	int expected;
	int actual;

	for (int c = 0; c < 128; c++)
	{
		expected = isalpha(c);
		actual = ft_isalpha(c);
		if (expected != actual)
        {
			printf("Test failed: isalpha(%d) = %d, ft_isalpha(%d) = %d\n", c, expected, c, actual);
            return;
        }
	}
	printf("All tests passed!\n");
}

int	main(void)
{
	test_isalpha();
	return (0);
}
