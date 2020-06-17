#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>
#include <string.h>


static void             ft_print_result(char const *s)
{
	int             len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void             check_strchr(char *s, int c, int offset)
{
	char            *str;

	if (!(str = ft_strchr(s, c)))
		ft_print_result("NULL");
	else
	{
		ft_print_result(str);
		if (str != (s + offset))
			ft_print_result("\nReturn value is false");
	}
}

static void             check_strchrtrue(char *s, int c, int offset)
{
	char            *str;

	if (!(str = strchr(s, c)))
		ft_print_result("NULL");
	else
	{
		ft_print_result(str);
		if (str != (s + offset))
			ft_print_result("\nReturn value is false");
	}
}



int             main(void)
{



	printf("============================================================================================\n");
	printf("============================================================================================\n");
	printf("\n");
	printf("                                        FT_STRCHR\n");
	printf("\n");
	printf("============================================================================================\n");
	printf("============================================================================================\n");


	char            str2[] = "bonjour";

	printf("bonjour :");

	printf("\n\nTEST 1 :\n");
	printf("str2, 'b', 0\n");
	check_strchr(str2, 'b', 0);


	printf("\nTEST 1 strstr() :\n");
	check_strchrtrue(str2, 'b', 0);
	printf("\n");
	/*------------------------------------------------------------------*/

	printf("\n\nTEST 2 :\n");
	check_strchr(str2, 'o', 1);


	printf("\nTEST 2 strstr() :\n");
	check_strchrtrue(str2, 'o', 1);
	printf("\n");


	/*------------------------------------------------------------------*/
	printf("\n\nTEST 3 :\n");
	printf("str2, 'j', 3\n");
	check_strchr(str2, 'j', 3);


	printf("\nTEST 3 strstr() :\n");
	check_strchrtrue(str2, 'j', 3);
	printf("\n");

	/*------------------------------------------------------------------*/
	printf("\n\nTEST 4 :\n");
	printf("str2, 's', 0\n");
	check_strchr(str2, 's', 0);


	printf("\nTEST 4 strstr() :\n");
	check_strchrtrue(str2, 's', 0);
	printf("\n");

	/*------------------------------------------------------------------*/
	printf("\n\nTEST 5 :\n");
	printf("str2, '\\0', 7\n");
	check_strchr(str2, '\0', 7);


	printf("\nTEST 5 strstr() :\n");
	check_strchrtrue(str2, '\0', 7);
	printf("\n");

	/*------------------------------------------------------------------*/
	char    str3[] = "";
	printf("\n\nTEST 6 :\n");
	printf("str3, '\\0', 0");
	check_strchr(str3, '\0', 0);

	printf("\n\nTEST 6 strstr() :\n");
	check_strchrtrue(str3, '\0', 0);
	printf("\n");


	return(0);
}
