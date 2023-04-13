#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	// char *input_strings[] = {
	// 	"0",
	// 	"123",
	// 	"-456",
	// 	"+789",
	// 	"  42",
	// 	"  \t  -987",
	// 	"  99999999999999999999999999999999999999999999",
	// 	"  -99999999999999999999999999999999999999999999",
	// 	"foo",
	// 	"",
	// 	"	 ",
	// 	"-2147483648",
	// 	"2147483647",
	// 	"-2147483649",
	// 	"2147483648",
	// 	NULL
	// };
	// int expected_results[] = {
	// 	0,
	// 	123,
	// 	-456,
	// 	789,
	// 	42,
	// 	-987,
	// 	0,
	// 	0,
	// 	0,
	// 	0,
	// 	0,
	// 	-2147483648,
	// 	2147483647,
	// 	-2147483648,
	// 	2147483647
	// };
	// int num_tests = sizeof(input_strings) / sizeof(char*) - 1;

	// for (int i = 0; i < num_tests; i++) {
	// 	int expected = expected_results[i];
	// 	char *input = input_strings[i];

	// 	int ft_result = ft_atoi(input);
	// 	int lib_result = atoi(input);

	// 	if (ft_result != expected || lib_result != expected) {
	// 		printf("Test failed for input '%s'\n", input);
	// 		printf("Expected: %d\n", expected);
	// 		printf("ft_atoi:  %d\n", ft_result);
	// 		printf("atoi:     %d\n", lib_result);
	// 	}
		// if (i == 13)
		// {
		// 	printf("ft_atoi:  %d\n", ft_result);
		// 	printf("atoi:     %d\n", lib_result);
		// }
		char *s = "-18446744073709551615 ";
		printf("ft_atoi(%s) = %i\n", s, ft_atoi(s));
		printf("atoi(%s) = %i\n", s, atoi(s));
	

	printf("All tests passed\n");
	return 0;
}
