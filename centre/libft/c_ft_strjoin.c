#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>


static void                     ft_print_result(char const *s)
{
	int             len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void                     check_strjoin(char *s1, char *s2)
{
	char    *strjoin;

	if (!(strjoin = ft_strjoin(s1, s2)))
		ft_print_result("NULL");
	else
		ft_print_result(strjoin);
	if (strjoin == s1 || strjoin == s2)
		ft_print_result("\nA new string was not returned");
	else
		free(strjoin);
}


int             main(void)
{



	printf("============================================================================================\n");
	printf("============================================================================================\n");
	printf("\n");
	printf("                                        FT_STRJOIN\n");
	printf("\n");
	printf("============================================================================================\n");
	printf("============================================================================================\n");


	char    s1[] = "lorem ipsum";
	char    s2[] = "dolor sit amet";



	printf("\n\nTEST 1 :\n");
	printf("s1[] = lorem ipsum\n");
	printf("s2[] = dolor sit amet\n");
	check_strjoin(s1, s2);
	printf("\n\n\n");



	s1[0] = '\0';

	printf("\n\nTEST 2 :\n");
	printf("s1[0] = \\0\n");
	printf("s2[] = dolor sit amet\n");
	check_strjoin(s1, s2);
	printf("\n\n\n");



	char	s3[] = "lorem ipsum"; 
		s2[0] = '\0';

	printf("\n\nTEST 1 :\n");
	printf("s3[] = lorem ipsum\n");
	printf("s2[0] = \\0\n");
	check_strjoin(s3, s2);
	printf("\n\n\n");



	s1[0] = '\0';
	s2[0] = '\0';

	printf("\n\nTEST 1 :\n");
	printf("s1[0] = \\0\n");
	printf("s2[0] = \\0\n");
	check_strjoin(s1, s2);
	printf("\n\n\n");


	return(0);
}
