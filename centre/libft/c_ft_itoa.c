#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
static void             ft_print_result(char *s)
{
	int             len;

	if (!s)
		write(1, "NULL", 4);
	else
	{
		len = 0;
		while (s[len])
			len++;
		write(1, s, len);
		free(s);
	}
}




int main(void)
{

	printf("============================================================================================\n");
	printf("============================================================================================\n");
	printf("\n");
	printf("                                        FT_ITOA\n");
	printf("\n");
	printf("============================================================================================\n");
	printf("============================================================================================\n");


	int test1 = 0;
	int test2 = 9;
	int test3 = -9;
	int test4 = 10;
	int test5 = -10;
	int test6 = 8124;
	int test7 = -9874;
	int test8 = 543000;
	int test9 = -2147483648LL;
	int test10 = 2147483647;


	printf("TEST1 ft_itoa:\n");
	ft_print_result(ft_itoa(0)); 
	printf("\n");
	printf("TEST2 ft_itoa:\n");
	ft_print_result(ft_itoa(9)); 
	printf("\n");


	printf("TEST3 ft_itoa:\n");
	printf("%s\n", ft_itoa(test3));

	printf("TEST4 ft_itoa:\n");
	printf("%s\n", ft_itoa(test4));

	printf("TEST5 ft_itoa:\n");
	printf("%s\n", ft_itoa(test5));

	printf("TEST6 ft_itoa:\n");
	printf("%s\n", ft_itoa(test6));

	printf("TEST7 ft_itoa:\n");
	printf("%s\n", ft_itoa(test7));

	printf("TEST8 ft_itoa:\n");
	printf("%s\n", ft_itoa(test8));

	printf("TEST9 ft_itoa:\n");
	printf("%s\n", ft_itoa(test9));

	printf("TEST10 ft_itoa:\n");
	printf("%s\n", ft_itoa(test10));


	return (0);
}
