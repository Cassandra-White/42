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




int             main(void)
{



	printf("============================================================================================\n");
	printf("============================================================================================\n");
	printf("\n");
	printf("                                        FT_STRDUP\n");
	printf("\n");
	printf("============================================================================================\n");
	printf("============================================================================================\n");




	printf("\n\nTEST :\n");
	
	char    str[] = "lorem ipsum dolor sit amet";
	char    *str_dup;

	if (!(str_dup = ft_strdup(str)))
		ft_print_result("NULL");
	else
		ft_print_result(str_dup);
	if (str_dup == str)
		ft_print_result("\nstr_dup's adress == str's adress");
	else
		free(str_dup);

/*-----------------------------------------------------------------------------*/
	
	printf("\n\nTEST strdup() :\n");
	char    str2[] = "lorem ipsum dolor sit amet";
	char    *str_dup2;

	if (!(str_dup2 = strdup(str2)))
		ft_print_result("NULL");
	else
		ft_print_result(str_dup2);
	if (str_dup2 == str2)
		ft_print_result("\nstr_dup's adress == str's adress");
	else
		free(str_dup2);

	printf("\n\n");


	return(0);
}
