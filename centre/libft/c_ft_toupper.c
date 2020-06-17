#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>
#include <ctype.h>


static void             check_toupper(int start, int end)
{
        int             c;

        while (start <= end)
        {
                c = ft_toupper(start);
                write(1, &c, 1);
                start++;
        }
}


static void             check_touppertrue(int start, int end)
{
        int             c;

        while (start <= end)
        {
                c = toupper(start);
                write(1, &c, 1);
                start++;
        }
}




int                             main(void)
{




        printf("============================================================================================\n");
        printf("============================================================================================\n");
        printf("\n");
        printf("                                        FT_TOUPPER\n");
        printf("\n");
        printf("============================================================================================\n");
        printf("============================================================================================\n");


        printf("\n\nTEST 1 :\n");
        printf("0 to 47\n");
        check_toupper(0, 47);
        printf("\nTest 1 tolower() :\n");
        check_touppertrue(0, 47);
        printf("\n");



        printf("\n\nTEST 2 :\n");
        printf("'0' to '9'\n");
        check_toupper('0', '9');
        printf("\nTest 2 tolower() :\n");
        check_touppertrue('0', '9');
        printf("\n");

        printf("\n\nTEST 3 :\n");
        printf("58 to 64\n");
        check_toupper(58, 64);
        printf("\nTest 3 tolower() :\n");
        check_touppertrue(58, 64);
        printf("\n");


        printf("\n\nTEST 4 :\n");
        printf("'A' to 'Z'\n");
        check_toupper('A', 'Z');
        printf("\nTest 4 tolower() :\n");
        check_touppertrue('A', 'Z');
        printf("\n");


        printf("\n\nTEST 5 :\n");
        printf("91 to 96\n");
        check_toupper(91, 96);
        printf("\nTest 5 tolower() :\n");
        check_touppertrue(91, 96);
        printf("\n");



        printf("\n\nTEST 6 :\n");
        printf("'a' to 'z'\n");
        check_toupper('a', 'z');
        printf("\nTest 6 tolower() :\n");
        check_touppertrue('a', 'z');
        printf("\n");



        printf("\n\nTEST 7 :\n");
        printf("123 to 127\n");
        check_toupper(123, 127);
        printf("\nTest 7 tolower() :\n");
        check_touppertrue(123, 127);
        printf("\n\n\n");



        return (0);
}
