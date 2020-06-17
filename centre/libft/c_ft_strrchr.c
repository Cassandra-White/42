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

static void             check_strrchr(char *s, int c, int offset)
{
	char            *str;

	if (!(str = ft_strrchr(s, c)))
		ft_print_result("NULL");
	else
	{
		ft_print_result(str);
		if (str != (s + offset))
			ft_print_result("\nReturn value is false");
	}
}

static void             check_strrchrtrue(char *s, int c, int offset)
{
	char            *str;

	if (!(str = strrchr(s, c)))
		ft_print_result("NULL");
	else
	{
		ft_print_result(str);
		if (str != (s + offset))
			ft_print_result("\nReturn value is false");
	}
}



int     main(void)
{


	printf("============================================================================================\n");
	printf("============================================================================================\n");
	printf("\n");
	printf("                                        FT_STRRCHR\n");
	printf("\n");
	printf("============================================================================================\n");
	printf("============================================================================================\n");



	char            str2[] = "bonjour";



	printf("\n\nTEST1 :\n");
	printf("str2 = \"bonjour\"\n");
	printf("str2, 'b', 0\n");
	check_strrchr(str2, 'b', 0);
	printf("\nTEST1 strrchr() :\n");
	check_strrchrtrue(str2, 'b', 0); 
	printf("\n");


	printf("\n\nTEST2 :\n");
	printf("str2 = \"bonjour\"\n");
	printf("str2, 'o', 4\n");
	check_strrchr(str2, 'o', 4);
	printf("\nTEST2 strrchr() :\n");
	check_strrchrtrue(str2, 'o', 4);
	printf("\n");



	printf("\n\nTEST3 :\n");
	printf("str3 = \"bonjourno\"\n");
	printf("str3, 'o', 8\n");
	char    str3[]= "bonjourno";
	check_strrchr(str3, 'o', 8);
	printf("\nTEST3 strrchr() :\n");
	check_strrchrtrue(str3, 'o', 8);
	printf("\n");


	printf("\n\nTEST4 :\n");
	printf("str2 = \"bonjour\"\n");
	printf("str2, 'j', 3\n");
	check_strrchr(str2, 'j', 3);
	printf("\nTEST4 strrchr() :\n");
	check_strrchrtrue(str2, 'j', 3);
	printf("\n");

	printf("\n\nTEST5 :\n");
	printf("str2 = \"bonjour\"\n");
	printf("str2, 's', 0\n");
	check_strrchr(str2, 's', 0);
	printf("\nTEST5 strrchr() :\n");
	check_strrchrtrue(str2, 's', 0);
	printf("\n");


	printf("\n\nTEST6 :\n");
	printf("str2 = \"bonjour\"\n");
	printf("str2, '\\0', 7\n");
	check_strrchr(str2, '\0', 7);
	printf("\nTEST6 strrchr() :\n");
	check_strrchrtrue(str2, '\0', 7);
	printf("\n");                       


	printf("\n\nTEST7 :\n");
	printf("str4 = \"\"\n");
	printf("str4, '\\0', 0\n");
	char    str4[] = "";
	check_strrchr(str4, '\0', 0);
	printf("\nTEST7 strrchr() :\n");
	check_strrchrtrue(str4, '\0', 0);
	printf("\n");


	printf("\n\nTEST8 :\n");
	printf("str2 = \"bonjour\"\n");
	printf("str2 + 2, 'b', 0\n");
	check_strrchr(str2 + 2, 'b', 0);
	printf("\nTEST8 strrchr() :\n");
	check_strrchrtrue(str2 + 2, 'b', 0);
	printf("\n");
               printf("\n");


	return (0);
}

