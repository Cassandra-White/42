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

static void             check_strtrim(char *s1, char *set)
{
	char    *strtrim;

	if (!(strtrim = ft_strtrim(s1, set)))
		ft_print_result("NULL");
	else
		ft_print_result(strtrim);
	if (strtrim == s1)
		ft_print_result("\nA new string was not returned");
	else
		free(strtrim);
}


int                             main(void)
{
	



        printf("============================================================================================\n");
        printf("============================================================================================\n");
        printf("\n");
        printf("                                        FT_STRTRIM\n");
        printf("\n");
        printf("============================================================================================\n");
        printf("============================================================================================\n");










	char    set [] = "\t \n";
	printf("\n\n set [] = \"\\t \\n\"\n");        

	printf("\n\nTEST1 :\n");
	printf("s1[] = \"lorem \\n ipsum \\t dolor \\n sit \\t amet\"\n");
	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	check_strtrim(s1, set);
	printf("\n\n");



	printf("\n\nTEST2 :\n");
	printf("s2[] = \"lorem ipsum dolor sit amet \\n \\t \"\n");
	char s2[] = "lorem ipsum dolor sit amet \n \t ";
	check_strtrim(s2, set);
	printf("\n\n");


	printf("\n\nTEST3 :\n");
	printf("s3[] = \" \\n \\t lorem ipsum dolor sit amet\"\n");
	char s3[] = " \n \t lorem ipsum dolor sit amet";
	check_strtrim(s3, set);
	printf("\n\n");


	printf("\n\nTEST4 :\n");
	printf("s4[] = \"  \\n  \\t  lorem \\n ipsum \\t dolor \\n sit \\t amet  \\t \\n \"\n");
	char s4[] = "  \n  \t  lorem \n ipsum \t dolor \n sit \t amet  \t \n ";
	check_strtrim(s4, set);
	printf("\n\n");


	printf("\n\nTEST5 :\n");
	printf("s5[] = \"          \"\n");
	char s5[] = "          ";
	check_strtrim(s5, set);
	printf("\n\n");



	return (0);
}

