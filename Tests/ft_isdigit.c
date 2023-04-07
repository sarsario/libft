#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

void	test_isdigit(int c)
{
	if (ft_isdigit(c) == isdigit(c))
		printf("Test passed for character '%c'\n", c);
	else
		printf("Test failed for character '%c'\n", c);
}

int		main(void)
{
	test_isdigit('0');
	test_isdigit('1');
	test_isdigit('2');
	test_isdigit('3');
	test_isdigit('4');
	test_isdigit('5');
	test_isdigit('6');
	test_isdigit('7');
	test_isdigit('8');
	test_isdigit('9');
	test_isdigit('a');
	test_isdigit('z');
	test_isdigit('A');
	test_isdigit('Z');
	test_isdigit('+');
	test_isdigit('-');
	test_isdigit('\t');
	test_isdigit('\n');
	test_isdigit('\v');
	test_isdigit('\f');
	test_isdigit('\r');
	test_isdigit(' ');
	return (0);
}
