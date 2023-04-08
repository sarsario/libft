#include "../libft.h"
#include <string.h>
#include <stdio.h>
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int main()
{
    // 1
	// When dst and src are both not NULL, and dstsize is larger than the size
    // of dst. strlcat does not compile because of seg fault.
    char *s1 = "parasite.";
    char d1[8] = "cutie ";
    // char d2[8] = "cutie ";
    size_t l1 = strlcat(d1, s1, 8);
    // size_t l2 = ft_strlcat(d2, s1, 10);
    printf("l1 = %zu\n", l1);
    // printf("l2 = %zu\n", l2);
    printf("d1 = %s\n", d1);
    printf("d1[%i] = %c\n", 7, d1[7]);
    // printf("d2 = %s\n", d2);
    // 2
	// When dst and src are both not NULL, and dstsize is smaller than or equal to the size of dst.
    // 3
	// When dst is NULL and src is not NULL, and dstsize is greater than 0.
    // 4
	// When dst is not NULL and src is NULL.
    // 5
	// When dst is NULL and src is NULL, and dstsize is greater than 0.
    // 6
	// When dst is NULL and src is NULL, and dstsize is 0.
}