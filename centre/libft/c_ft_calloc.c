#include "libft.h"
#include <stdio.h>
#include <string.h>




int main(void)
{

	printf("============================================================================================\n");
	printf("============================================================================================\n");
	printf("\n");
	printf("                                        FT_CALLOC\n");
	printf("\n");
	printf("============================================================================================\n");
	printf("============================================================================================\n");

	char *str;

	printf("\n\nstr = (char *)ft_calloc(30, sizeof(char));\n\n");

	printf("=>012345678901234567890132456789<=\n");
	str = (char *)ft_calloc(30, sizeof(char));
	if (!str)
		write(1, "NULL", 4);
	else
		write(1, "\n", 1);
		write(1, "Resultat ft_calloc :", 20);
		write(1, "\n", 1);
		write(1,"=>", 2);
		write(1, str, 30);
		write(1,"<=", 2);
		write(1, "\n", 1);

	free(str);

	str = (char *)calloc(30, sizeof(char));
	if (!str)
		write(1, "NULL", 4);
	else
		write(1, "\n", 1);
		write(1, "Resultat calloc :", 18);
		write(1, "\n", 1);
		write(1,"=>", 2);
		write(1, str, 30);
		write(1,"<=", 2);
		write(1, "\n", 1);

	free(str);
	return (0);
}	
