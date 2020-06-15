#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_memccpy(void *dest, void *src, int c, int n)
{
	void	*membis;

	membis = dest;
	if (!(dest = ft_memccpy(dest, src, c, n)))
	{
		ft_print_result("NULL");
		write(1, "\n", 1);
		ft_print_result(membis);
	}
	else
	{
		ft_print_result(dest);
		write(1, "\n", 1);
		ft_print_result(membis);
	}
	free(membis);
}


static void             check_memccpytrue(void *dest, void *src, int c, int n)
{
	void    *membis;

	membis = dest;
	if (!(dest = memccpy(dest, src, c, n)))
	{
		ft_print_result("NULL");
		write(1, "\n", 1);
		ft_print_result(membis);
	}
	else
	{
		ft_print_result(dest);
		write(1, "\n", 1);
		ft_print_result(membis);
	}
	free(membis);
}


int main(void)
{


	printf("============================================================================================\n");
	printf("============================================================================================\n");
	printf("\n");
	printf("                                        FT_MEMCCPY\n");
	printf("\n");
	printf("============================================================================================\n");
	printf("============================================================================================\n");


	void	*mem;

	if (!(mem = malloc(sizeof(*mem) * 30)))
		return (0);
	memset(mem, 'j', 29);
	((char*)mem)[29] = '\0';

	printf("\nmemset(mem, 'j', 29);\n");
	printf("\n\nTEST1 : \n");
	printf("mem, zyxwvutsrqponmlkjihgfedcba, 'r', 20\n");
	check_memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'r', 20);


	if (!(mem = malloc(sizeof(*mem) * 30)))
		return (0);
	memset(mem, 'j', 29);
	((char*)mem)[29] = '\0';

	printf("\nTEST1 memccpy() : \n");
	check_memccpytrue(mem, "zyxwvutsrqponmlkjihgfedcba", 'r', 20);

	if (!(mem = malloc(sizeof(*mem) * 30)))
		return (0);
	memset(mem, 'j', 29);
	((char*)mem)[29] = '\0';

	printf("\n\nTEST2 : \n");
	printf("mem, zyxwvutsrqponmlkjihgfedcba, 'r', 3\n");
	check_memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'r', 3);	

	if (!(mem = malloc(sizeof(*mem) * 30)))
		return (0);
	memset(mem, 'j', 29);
	((char*)mem)[29] = '\0';


	printf("\nTEST2 memccpy() : \n");
	check_memccpytrue(mem, "zyxwvutsrqponmlkjihgfedcba", 'r', 3);

	if (!(mem = malloc(sizeof(*mem) * 30)))
		return (0);
	memset(mem, 'j', 29);
	((char*)mem)[29] = '\0';




	printf("\n\nTEST3 : \n");
	printf("mem, zyxwvutsrqponmlkjihgfedcba, 'a', 26\n");
	check_memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'a', 26);


	if (!(mem = malloc(sizeof(*mem) * 30)))
		return (0);
	memset(mem, 'j', 29);
	((char*)mem)[29] = '\0';

	printf("\nTEST3 memccpy() : \n");
	check_memccpytrue(mem, "zyxwvutsrqponmlkjihgfedcba", 'a', 26);

	if (!(mem = malloc(sizeof(*mem) * 30)))
		return (0);
	memset(mem, 'j', 29);
	((char*)mem)[29] = '\0';

	printf("\n\nTEST4 : \n");
	printf("mem, zyxwvuzyxwvu, 'x', 20\n");
	check_memccpy(mem, "zyxwvuzyxwvu", 'x', 20);

	if (!(mem = malloc(sizeof(*mem) * 30)))
		return (0);
	memset(mem, 'j', 29);
	((char*)mem)[29] = '\0';

	printf("\nTEST4 memccpy() : \n");
	check_memccpytrue(mem, "zyxwvuzyxwvu", 'x', 20);
	printf("\n");

	return (0);
}
