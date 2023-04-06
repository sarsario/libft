#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char *str1 = "1234";
	char *str2 = "   +1234";
	char *str3 = "   -1234";
	char *str4 = "  -+1234";
	char *str5 = "0";
	char *str6 = "    +0";
	char *str7 = "  -0";
	char *str8 = "2147483647";
	char *str9 = "-2147483648";
	char *str10 = "2147483648";
	char *str11 = "-2147483649";
	char *str12 = " + 1234abc";
	char *str13 = "abc1234";
	char *str14 = "   -+ 1234";
	char *str15 = " 2147 483647";
	char *str16 = "-2147 483648";
	char *str17 = "1234+5678";
	char *str18 = "1234-5678";
	char *str19 = "";

	printf("Test 1: '%s' -> %d\n", str1, ft_atoi(str1));
	printf("Test 2: '%s' -> %d\n", str2, ft_atoi(str2));
	printf("Test 3: '%s' -> %d\n", str3, ft_atoi(str3));
	printf("Test 4: '%s' -> %d\n", str4, ft_atoi(str4));
	printf("Test 5: '%s' -> %d\n", str5, ft_atoi(str5));
	printf("Test 6: '%s' -> %d\n", str6, ft_atoi(str6));
	printf("Test 7: '%s' -> %d\n", str7, ft_atoi(str7));
	printf("Test 8: '%s' -> %d\n", str8, ft_atoi(str8));
	printf("Test 9: '%s' -> %d\n", str9, ft_atoi(str9));
	printf("Test 10: '%s' -> %d\n", str10, ft_atoi(str10));
	printf("Test 11: '%s' -> %d\n", str11, ft_atoi(str11));
	printf("Test 12: '%s' -> %d\n", str12, ft_atoi(str12));
	printf("Test 13: '%s' -> %d\n", str13, ft_atoi(str13));
	printf("Test 14: '%s' -> %d\n", str14, ft_atoi(str14));
	printf("Test 15: '%s' -> %d\n", str15, ft_atoi(str15));
	printf("Test 16: '%s' -> %d\n", str16, ft_atoi(str16));
	printf("Test 17: '%s' -> %d\n", str17, ft_atoi(str17));
	printf("Test 18: '%s' -> %d\n", str18, ft_atoi(str18));
	printf("Test 19: '%s' -> %d\n", str19, ft_atoi(str19));

	return (0);
}
