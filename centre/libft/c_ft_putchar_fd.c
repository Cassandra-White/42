#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>


int	main(void)
{


	printf("============================================================================================\n");
	printf("============================================================================================\n");
	printf("\n");
	printf("                                        FT_PUTCHAR_FD\n");
	printf("\n");
	printf("============================================================================================\n");
	printf("============================================================================================\n");

	char i;
	i = 0;


	printf("\n0 <= 64\n");
	while (i <= 64)
	{
		ft_putchar_fd(i, 2);
		i++;
	}
	printf("\n\n 'A' <= 'Z'\n");
	i = 'A';
	while (i <= 'Z')
	{
		ft_putchar_fd(i, 1);
		i++;
	}

  printf("\n\n 91 <= 96\n");
	i = 91;
	while (i <= 96)
	{
		ft_putchar_fd(i, 2);
		i++;
	}

printf("\n\n 'a' <= 'z'\n");
	i = 'a';
	while (i <= 'z')
	{
		ft_putchar_fd(i, 1);
		i++;
	}

printf("\n\n 123 <= 127\n");
	i = 123;
	while (i <= 126)
	{
		ft_putchar_fd(i, 1);
		i++;
	}
printf("\n\n");
	return (0);
}
