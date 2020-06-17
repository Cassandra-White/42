#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>
static void		ft_print_result(int n)
{
	if (n > 0)
		write(1, "1", 1);
	else if (n < 0)
		write(1, "-1", 2);
	else
		write(1, "0", 1);
}


int	main(void)
{


	printf("============================================================================================\n");
	printf("============================================================================================\n");
	printf("\n");
	printf("                                        FT_STRNCMP\n");
	printf("\n");
	printf("============================================================================================\n");
	printf("============================================================================================\n");



	printf("\n\nTEST1 : \n");
	printf("salut, salut, 5");
	ft_print_result(ft_strncmp("salut", "salut", 5));
	printf("\nTEST1 strncmp() : \n");
	ft_print_result(strncmp("salut", "salut", 5));

	printf("\n\nTEST2 : \n");
        printf("test, testss, 7\n");
	ft_print_result(ft_strncmp("test", "testss", 7));
	printf("\nTEST2 strncmp() : \n");
	ft_print_result(strncmp("test", "testss", 7));




	printf("\n\nTEST3 : \n");
        printf("testss, test, 7\n");
	ft_print_result(ft_strncmp("testss", "test", 7));
	printf("\nTEST3 strncmp() : \n");
	ft_print_result(strncmp("testss", "test", 7));


	printf("\n\nTEST4 : \n");
        printf("test, tEst, 4)\n");
	ft_print_result(ft_strncmp("test", "tEst", 4));
	printf("\nTEST4 strncmp() : \n");
	ft_print_result(strncmp("test", "tEst", 4));


	printf("\n\nTEST5 : \n");
	printf("'', test, 4\n");
	ft_print_result(ft_strncmp("", "test", 4));
	printf("\nTEST5 strncmp() : \n");
	ft_print_result(strncmp("", "test", 4));



	printf("\n\nTEST6 : \n");
	printf("test, '', 4\n");
	ft_print_result(ft_strncmp("test", "", 4));
	printf("\nTEST6 strncmp() : \n");
	ft_print_result(strncmp("test", "", 4));



	printf("\n\nTEST7 : \n");
        printf("bcdefghij, abcdefgxyz, 3\n");
	ft_print_result(ft_strncmp("abcdefghij", "abcdefgxyz", 3));
	printf("\nTEST7 strncmp() : \n");
	ft_print_result(strncmp("abcdefghij", "abcdefgxyz", 3));



	printf("\n\nTEST8 : \n");
        printf("bcdefgh, abcdwxyz, 4\n");
	ft_print_result(ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("\nTEST8 strncmp() : \n");
	ft_print_result(strncmp("abcdefgh", "abcdwxyz", 4));



	printf("\n\nTEST9 : \n");
        printf("zyxbcdefgh, abcdwxyz, 0\n");
	ft_print_result(ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
	printf("\nTEST9 strncmp() : \n");
	ft_print_result(strncmp("zyxbcdefgh", "abcdwxyz", 0));


	printf("\n\nTEST10 : \n");
        printf("abcdefgh, '', 0)\n");
	ft_print_result(ft_strncmp("abcdefgh", "", 0));
	printf("\nTEST10 strncmp() : \n");
	ft_print_result(strncmp("abcdefgh", "", 0));



	printf("\n\nTEST11 : \n");
        printf("test\\200, test\\0, 6\n");
	ft_print_result(ft_strncmp("test\200", "test\0", 6));
	printf("\nTEST11 strncmp() : \n");
	ft_print_result(strncmp("test\200", "test\0", 6));

	printf("\n\n");




	return(0);
}
