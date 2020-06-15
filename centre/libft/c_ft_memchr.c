#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

static void             ft_print_result(const char *s)
{
	int             len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void             check_memchr(void *s, char c, int n)
{
	const char *str;

	str = ft_memchr(s, c, n);
	if (!str)
		ft_print_result("NULL");
	else
		ft_print_result(str);
}

static void             check_memchrtrue(void *s, char c, int n)
{
	const char *str;

	str = memchr(s, c, n);
	if (!str)
		ft_print_result("NULL");
	else
		ft_print_result(str);
}

int main(void)
{


	printf("============================================================================================\n");
	printf("============================================================================================\n");
	printf("\n");
	printf("                                        FT_MEMCHR\n");
	printf("\n");
	printf("============================================================================================\n");
	printf("============================================================================================\n");




	printf("\n\nTEST1 :\n");
	printf("bonjour, 'b', 4\n");
	check_memchr("bonjour", 'b', 4);
	printf("\n");
	printf("TEST memchr() :\n");
	check_memchr("bonjour", 'b', 4);
	printf("\n");

	printf("\n\nTEST2 :\n");
	printf("bonjour, 'o', 7\n");
	check_memchr("bonjour", 'o', 7);
	printf("\n");
	printf("TEST memchr() :\n");
	check_memchrtrue("bonjour", 'o', 7);
	printf("\n");

	printf("\n\nTEST3 :\n");
	printf("bonjourno, 'n', 2\n");
	check_memchr("bonjourno", 'n', 2);
	printf("\n");
	printf("TEST memchr() :\n");
	check_memchrtrue("bonjourno", 'n', 2);
	printf("\n");


	printf("\n\nTEST4 :\n");
	printf("bonjour, 'j', 6\n"); 
	check_memchr("bonjour", 'j', 6);
	printf("\n");
	printf("TEST memchr() :\n");
	check_memchrtrue("bonjour", 'j', 6);
	printf("\n");


	printf("\n\nTEST5 :\n");
	printf("bonjour, 's', 7\n");
	check_memchr("bonjour", 's', 7);
	printf("\n");
	printf("TEST memchr() :\n");
	check_memchrtrue("bonjour", 's', 7);
	printf("\n");

	printf("\n\nTEST6 :\n");
	printf("{-49, 49, 1, -1, 0, -2, 2}, 'n', 2\n");
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	check_memchr(tab, -1, 7);
	printf("\n");
	printf("TEST memchr() :\n");
	check_memchrtrue(tab, -1, 7);
	printf("\n");


	return (0);
}
