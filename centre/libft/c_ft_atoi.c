#include "libft.h"
#include <stdio.h>
#include <string.h>




int main(void)
{
	
printf("============================================================================================\n");
printf("============================================================================================\n");
printf("\n");
printf("					FT_ATOI\n");
printf("\n");
printf("============================================================================================\n");
printf("============================================================================================\n");


char *test1 = "0";
char *test2 = "546:5";
char *test3 = "-4886";
char *test4 = "+548";
char *test5 = "054854";
char *test6 = "000074";
char *test7 = "+-54";
char *test8 = "-+48";
char *test9 = "--47";
char *test10 = "++47";
char *test11 = "+47+5";
char *test12 = "-47-5";
char *test13 = "\e475";
char *test14 = "\t\n\r\v\f  469 \n";
char *test15 = "-2147483648";
char *test16 = "2147483647";
char *test17 = "\t\n\r\v\fd469 \n";
char *test18 = "\n\n\n  -46\b9 \n5d6";
char *test19 = "";



printf("TEST1 ft_atoi:\n");
printf("%d\n", ft_atoi(test1));
printf("TEST1 atoi :\n");
printf("%d\n\n", atoi(test1));

printf("TEST2 ft_atoi:\n");
printf("%d\n", ft_atoi(test2));
printf("TEST2 atoi :\n");
printf("%d\n\n", atoi(test2));

printf("TEST3 ft_atoi:\n");
printf("%d\n", ft_atoi(test3));
printf("TEST3 atoi :\n");
printf("%d\n\n", atoi(test3));

printf("TEST4 ft_atoi:\n");
printf("%d\n", ft_atoi(test4));
printf("TEST4 atoi :\n");
printf("%d\n\n", atoi(test4));

printf("TEST5 ft_atoi:\n");
printf("%d\n", ft_atoi(test5));
printf("TEST5 atoi :\n");
printf("%d\n\n", atoi(test5));

printf("TEST6 ft_atoi:\n");
printf("%d\n", ft_atoi(test6));
printf("TEST7 atoi :\n");
printf("%d\n\n", atoi(test6));

printf("TEST7 ft_atoi:\n");
printf("%d\n", ft_atoi(test7));
printf("TEST7 atoi :\n");
printf("%d\n\n", atoi(test7));

printf("TEST8 ft_atoi:\n");
printf("%d\n", ft_atoi(test8));
printf("TEST8 atoi :\n");
printf("%d\n\n", atoi(test8));

printf("TEST9 ft_atoi:\n");
printf("%d\n", ft_atoi(test9));
printf("TEST9 atoi :\n");
printf("%d\n\n", atoi(test9));

printf("TEST10 ft_atoi:\n");
printf("%d\n", ft_atoi(test10));
printf("TEST10 atoi :\n");
printf("%d\n\n", atoi(test10));

printf("TEST11 ft_atoi:\n");
printf("%d\n", ft_atoi(test11));
printf("TEST11 atoi :\n");
printf("%d\n\n", atoi(test11));

printf("TEST12 ft_atoi:\n");
printf("%d\n", ft_atoi(test12));
printf("TEST12 atoi :\n");
printf("%d\n\n", atoi(test12));

printf("TEST13 ft_atoi:\n");
printf("%d\n", ft_atoi(test13));
printf("TEST13 atoi :\n");
printf("%d\n\n", atoi(test13));

printf("TEST14 ft_atoi:\n");
printf("%d\n", ft_atoi(test14));
printf("TEST14 atoi :\n");
printf("%d\n\n", atoi(test14));

printf("TEST15 ft_atoi:\n");
printf("%d\n", ft_atoi(test15));
printf("TEST15 atoi :\n");
printf("%d\n\n", atoi(test15));

printf("TEST16 ft_atoi:\n");
printf("%d\n", ft_atoi(test16));
printf("TEST16 atoi :\n");
printf("%d\n\n", atoi(test16));

printf("TEST17 ft_atoi:\n");
printf("%d\n", ft_atoi(test17));
printf("TEST17 atoi :\n");
printf("%d\n\n", atoi(test17));

printf("TEST18 ft_atoi:\n");
printf("%d\n", ft_atoi(test18));
printf("TEST18 atoi :\n");
printf("%d\n\n", atoi(test18));

printf("TEST19 ft_atoi:\n");
printf("%d\n", ft_atoi(test19));
printf("TEST19 atoi :\n");
printf("%d\n\n", atoi(test19));


	return (0);
}
