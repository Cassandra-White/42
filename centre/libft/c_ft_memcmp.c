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
        printf("                                        FT_MEMCMP\n");
        printf("\n");
        printf("============================================================================================\n");
        printf("============================================================================================\n");




		printf("\n\nTEST1 : \n");
		ft_print_result(ft_memcmp("salut", "salut", 5));
		printf("\n%d\n",ft_memcmp("salut", "salut", 5));
		printf("TEST1 memcmp() :\n");
		printf("%d",ft_memcmp("salut", "salut", 5));		
		
		printf("\n\nTEST2 : \n");
		ft_print_result(ft_memcmp("t\200", "t\0", 2));
		printf("\n%d\n",ft_memcmp("t\200", "t\0", 2));
printf("TEST2 memcmp() :\n");
                printf("%d",ft_memcmp("t\200", "t\0", 2));

		printf("\n\nTEST3 : \n");
		ft_print_result(ft_memcmp("testss", "test", 5));
		printf("\n%d\n",ft_memcmp("testss", "test", 5));
printf("TEST3 memcmp() :\n");
                printf("%d",ft_memcmp("testss", "test", 5));

		printf("\n\nTEST4 : \n");
		ft_print_result(ft_memcmp("test", "tEst", 4));
		printf("\n%d\n",ft_memcmp("test", "tEst", 4));
printf("TEST4 memcmp() :\n");
                printf("%d",ft_memcmp("test", "tEst", 4));
		
printf("\n\nTEST5 : \n");
		ft_print_result(ft_memcmp("", "test", 4));
		printf("\n%d\n",ft_memcmp("", "test", 4));
printf("TEST5 memcmp() :\n");
                printf("%d",ft_memcmp("", "test", 4));
		
		printf("\n\nTEST6 : \n");
		ft_print_result(ft_memcmp("test", "", 4));
		printf("\n%d\n",ft_memcmp("test", "", 4));
printf("TEST6 memcmp() :\n");
                printf("%d",ft_memcmp("test", "", 4));

		printf("\n\nTEST7 : \n");
		ft_print_result(ft_memcmp("abcdefghij", "abcdefgxyz", 7));
		printf("\n%d\n",ft_memcmp("abcdefghij", "abcdefgxyz", 7));
printf("TEST7 memcmp() :\n");
                printf("%d",ft_memcmp("abcdefghij", "abcdefgxyz", 7));

		printf("\n\nTEST8 : \n");
		ft_print_result(ft_memcmp("abcdefgh", "abcdwxyz", 6));
		printf("\n%d\n",ft_memcmp("abcdefgh", "abcdwxyz", 6));
		printf("TEST8 memcmp() :\n");
                printf("%d",ft_memcmp("abcdefgh", "abcdwxyz", 6));

		printf("\n\nTEST9 : \n");
		ft_print_result(ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));
		printf("\n%d\n",ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));
		printf("TEST9 memcmp() :\n");
                printf("%d\n",ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));


	return(0);
}
