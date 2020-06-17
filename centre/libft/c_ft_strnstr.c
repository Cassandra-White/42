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

static void             check_strnstr(char *big, char *little, int len)
{
        const char *str;

        if (!(str = ft_strnstr(big, little, len)))
                ft_print_result("NULL");
        else
                ft_print_result(str);
}

static void             check_strnstrtrue(char *big, char *little, int len)
{
        const char *str;

        if (!(str = strnstr(big, little, len)))
                ft_print_result("NULL");
        else
                ft_print_result(str);
}


int     main(void)
{


        printf("============================================================================================\n");
        printf("============================================================================================\n");
        printf("\n");
        printf("                                        FT_STRNSTR\n");
        printf("\n");
        printf("============================================================================================\n");
        printf("============================================================================================\n");





		printf("\n\nTEST1 :\n");
		printf("\"lorem ipsum dolor sit amet\", \"lorem\", 15\n");
                check_strnstr("lorem ipsum dolor sit amet", "lorem", 15);
		printf("\nTEST1 strnstr() :\n");
                check_strnstrtrue("lorem ipsum dolor sit amet", "lorem", 15);
               printf("\n\n");


printf("\n\nTEST2 :\n");
printf("\"lorem ipsum dolor sit amet\", \"ipsum\", 15\n");
 check_strnstr("lorem ipsum dolor sit amet", "ipsum", 15);
                printf("\nTEST2 strnstr() :\n");
 check_strnstrtrue("lorem ipsum dolor sit amet", "ipsum", 15);
  printf("\n\n");


printf("\n\nTEST3 :\n");
printf("\"lorem ipsum dolor sit lorem ipsum dolor\", \"ipsum\", 35\n");
                check_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35);
                printf("\nTEST3 strnstr() :\n");
                check_strnstrtrue("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35);
  printf("\n\n");



printf("\n\nTEST4 :\n");
printf("\"lorem ipsum dolor sit amet\", \"\", 10\n");
                check_strnstr("lorem ipsum dolor sit amet", "", 10);
                printf("\nTEST4 strnstr() :\n");
                check_strnstrtrue("lorem ipsum dolor sit amet", "", 10);
  printf("\n\n");




printf("\n\nTEST5 :\n");
printf("\"lorem ipsum dolor sit amet\", \"ipsumm\", 30\n");
                check_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
                printf("\nTEST5 strnstr() :\n");
                check_strnstrtrue("lorem ipsum dolor sit amet", "ipsumm", 30);
  printf("\n\n");

printf("\n\nTEST6 :\n");
printf("\"lorem ipsum dolor sit amet\", \"dol\", 30\n");
                check_strnstr("lorem ipsum dolor sit amet", "dol", 30);
                printf("\nTEST6 strnstr() :\n");
                check_strnstrtrue("lorem ipsum dolor sit amet", "dol", 30);
  printf("\n\n");

printf("\n\nTEST7 :\n");
printf("\"lorem ipsum dolor sit amet\", \"consectetur\", 30\n");
                check_strnstr("lorem ipsum dolor sit amet", "consectetur", 30);
                printf("\nTEST7 strnstr() :\n");
                check_strnstrtrue("lorem ipsum dolor sit amet", "consectetur", 30);
  printf("\n\n");



printf("\n\nTEST8 :\n");
printf("\"lorem ipsum dolor sit amet\", \"sit\", 10\n");
                check_strnstr("lorem ipsum dolor sit amet", "sit", 10);
                printf("\nTEST8 strnstr() :\n");
                check_strnstrtrue("lorem ipsum dolor sit amet", "sit", 10);
  printf("\n\n");



printf("\n\nTEST9 :\n");
printf("\"lorem ipsum dolor sit amet\", \"dolor\", 15\n");
                check_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
                printf("\nTEST9 strnstr() :\n");
                check_strnstrtrue("lorem ipsum dolor sit amet", "dolor", 15);
   printf("\n\n");



printf("\n\nTEST10 :\n");
printf("\"lorem ipsum dolor sit amet\", \"dolor\", 0\n"); 
                check_strnstr("lorem ipsum dolor sit amet", "dolor", 0);
                printf("\nTEST10 strnstr() :\n");
                check_strnstrtrue("lorem ipsum dolor sit amet", "dolor", 0);
        
printf("\n\n");
       





	return (0);
}
