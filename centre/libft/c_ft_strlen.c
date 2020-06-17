#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>
#include <string.h>

static void             ft_print_result(int n)
{
        char c;

        if (n >= 10)
                ft_print_result(n / 10);
        c = n % 10 + '0';
        write (1, &c, 1);
}



int             main(void)
{



        printf("============================================================================================\n");
        printf("============================================================================================\n");
        printf("\n");
        printf("                                        FT_STRLEN\n");
        printf("\n");
        printf("============================================================================================\n");
        printf("============================================================================================\n");


                
		printf("\n\nTEST 1 :\n");
		printf("Hello !\n");
		ft_print_result(ft_strlen("Hello !"));
		printf("\nTEST 1 strlen() :\n");
                ft_print_result(strlen("Hello !"));

                printf("\n\nTEST 2 :\n");
		printf("1\n");
		ft_print_result(ft_strlen("1"));
                printf("\nTEST 2 strlen() :\n");
                ft_print_result(strlen("1"));


                printf("\n\nTEST 3 :\n");
		printf("lorem\\tipsum\\tdolor\\nsit\\namet\n");
                ft_print_result(ft_strlen("lorem\tipsum\tdolor\nsit\namet\n"));
                printf("\nTEST 3 strlen() :\n");
                ft_print_result(strlen("lorem\tipsum\tdolor\nsit\namet\n"));


                printf("\n\nTEST 4 :\n");
		printf("''\n");
                ft_print_result(ft_strlen(""));
                printf("\nTEST 4 strlen() :\n");
                ft_print_result(strlen(""));



                printf("\n\nTEST 5 :\n");
		printf("\\n\\n\\f\\r\\t\n");
                ft_print_result(ft_strlen("\n\n\f\r\t"));
                printf("\nTEST 5 strlen() :\n");
                ft_print_result(strlen("\n\n\f\r\t"));



		printf("\n\nTEST 6 :\n");
                printf("'   '\n");
                ft_print_result(ft_strlen("   "));
		printf("\nTEST 6 strlen() :\n");
		ft_print_result(strlen("   "));

		printf("\n\n");
		
        return(0);
}
