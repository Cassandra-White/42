#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>



static void             ft_print_result(char const *s)
{
        int             len;

        len = 0;
        while (s[len])
                len++;
        write(1, s, len);
}

static void             check_substr(char *str, int start, int len)
{
        char    *substr;

        if (!(substr = ft_substr(str, start, len)))
                ft_print_result("NULL");
        else
                ft_print_result(substr);
        if (str == substr)
                ft_print_result("\nA new string was not returned");
        else
                free(substr);
}




int                             main(void)
{




        printf("============================================================================================\n");
        printf("============================================================================================\n");
        printf("\n");
        printf("                                        FT_SUBSTR\n");
        printf("\n");
        printf("============================================================================================\n");
        printf("============================================================================================\n");

        char    str[] = "lorem ipsum dolor sit amet";

                
printf("\n\nstr[] = \"lorem ipsum dolor sit amet\"\n\n");
printf("\nTEST1 : \n");
printf("str, 7, 10\n");
check_substr(str, 0, 10);
printf("\n\n");


printf("\nTEST2 : \n");
printf("str, 7, 10\n");
                check_substr(str, 7, 10);
printf("\n\n");




printf("\nTEST3 : \n");
printf("str, 7, 10\n");
                check_substr(str, 7, 0);
printf("\n\n");


printf("\nTEST4 : \n");
printf("str, 0, 0\n");
                check_substr(str, 0, 0);
printf("\n\n");






	return(0);
}
