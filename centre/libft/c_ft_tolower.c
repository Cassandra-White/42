#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>
#include <ctype.h>


static void             check_tolower(int start, int end)
{
	int             c;

	while (start <= end)
	{
		c = ft_tolower(start);
		write(1, &c, 1);
		start++;
	}
}


static void             check_tolowertrue(int start, int end)
{
	int             c;

	while (start <= end)
	{
		c = tolower(start);
		write(1, &c, 1);
		start++;
	}
}




int                             main(void)
{




	printf("============================================================================================\n");
	printf("============================================================================================\n");
	printf("\n");
	printf("                                        FT_TOLOWER\n");
	printf("\n");
	printf("============================================================================================\n");
	printf("============================================================================================\n");


	printf("\n\nTEST 1 :\n");
	printf("0 to 47\n");
	check_tolower(0, 47);
	printf("\nTest 1 tolower() :\n");                
	check_tolowertrue(0, 47);
	printf("\n");



	printf("\n\nTEST 2 :\n");
	printf("'0' to '9'\n");
	check_tolower('0', '9');
	printf("\nTest 2 tolower() :\n");
	check_tolowertrue('0', '9');
	printf("\n");


	printf("\n\nTEST 3 :\n");
	printf("58 to 64\n");
	check_tolower(58, 64);
	printf("\nTest 3 tolower() :\n");
	check_tolowertrue(58, 64);
	printf("\n");


	printf("\n\nTEST 4 :\n");
	printf("'A' to 'Z'\n");
	check_tolower('A', 'Z');
	printf("\nTest 4 tolower() :\n");
	check_tolowertrue('A', 'Z');
	printf("\n");


	printf("\n\nTEST 5 :\n");
	printf("91 to 96\n");
	check_tolower(91, 96);
	printf("\nTest 5 tolower() :\n");
	check_tolowertrue(91, 96);
	printf("\n");



	printf("\n\nTEST 6 :\n");
	printf("'a' to 'z'\n");
	check_tolower('a', 'z');
	printf("\nTest 6 tolower() :\n");
	check_tolowertrue('a', 'z');
	printf("\n");



	printf("\n\nTEST 7 :\n");
	printf("123 to 127\n");
	check_tolower(123, 127);
	printf("\nTest 7 tolower() :\n");
	check_tolowertrue(123, 127);
	printf("\n\n\n");



	return (0);
}
