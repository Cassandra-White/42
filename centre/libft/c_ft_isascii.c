
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "libft.h"
#include <stdio.h>

static void             ft_print_result(int n)
{
	if (n)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

static void             check_isascii(int start, int end)
{
	while (start <= end)
	{
		ft_print_result(ft_isascii(start));
		start++;
	}
}

int main(void)
{

	printf("============================================================================================\n");
	printf("============================================================================================\n");
	printf("\n");
	printf("                                        FT_ISASCII\n");
	printf("\n");
	printf("============================================================================================\n");
	printf("============================================================================================\n");


	printf("\n\nTEST1 : 0 à 47\n");
	check_isascii(0, 47);
	printf("\n\nTEST2 : '0' à '9'\n");
	check_isascii('0', '9');
	printf("\n\nTEST3 : 58 à 64\n");
	check_isascii(58, 64);
	printf("\n\nTEST4 : 'A' à 'Z'\n");
	check_isascii('A', 'Z');
	printf("\n\nTEST5 : 91 à 96\n");
	check_isascii(91, 96);
	printf("\n\nTEST6 : 'a' à 'z'\n");
	check_isascii('a', 'z');
	printf("\n\nTEST7 : 123 à 127\n");
	check_isascii(123, 127);
	printf("\n\n");


	return (0);
}
