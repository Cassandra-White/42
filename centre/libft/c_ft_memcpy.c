#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

static void		check_memcpy(void *dest, void *src, int n)
{
	if (dest != ft_memcpy(dest, src, n))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dest, 30);
	free(dest);
}

static void             check_memcpytrue(void *dest, void *src, int n)
{
        if (dest != memcpy(dest, src, n))
                write(1, "dest's adress was not returned\n", 31);
        write(1, dest, 30);
        free(dest);
}


int     main(void)
{


        printf("============================================================================================\n");
        printf("============================================================================================\n");
        printf("\n");
        printf("                                        FT_MEMCPY\n");
        printf("\n");
        printf("============================================================================================\n");
        printf("============================================================================================\n");

	void	*mem;

printf("\n\nTEST1 : \n");
	if (!(mem = malloc(sizeof(*mem) * 30)))
		return (0);
	memset(mem, 'j', 30);
	check_memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 14);
printf("\nTEST1 memcpy(): \n");
        if (!(mem = malloc(sizeof(*mem) * 30)))
                return (0);
        memset(mem, 'j', 30);
        check_memcpytrue(mem, "zyxwvutsrqponmlkjihgfedcba", 14);



printf("\n\nTEST2 : \n");
        if (!(mem = malloc(sizeof(*mem) * 30)))
                return (0);
        memset(mem, 'j', 30);
	check_memcpy(mem, "zyxwvutst", 0);
printf("\nTEST2 memcpy(): \n");	
	if (!(mem = malloc(sizeof(*mem) * 30)))
		 return (0);
        memset(mem, 'j', 30);
        check_memcpytrue(mem, "zyxwvutst", 0);



printf("\n\nTEST3 : \n");
        if (!(mem = malloc(sizeof(*mem) * 30)))
                 return (0);
        memset(mem, 'j', 30);
	check_memcpy(mem, "zy\0xw\0vu\0\0tsr", 11);
printf("\nTEST3 memcmp() : \n");
	if (!(mem = malloc(sizeof(*mem) * 30)))
                 return (0);
        memset(mem, 'j', 30);
        check_memcpytrue(mem, "zy\0xw\0vu\0\0tsr", 11);
printf("\n\n");
	return (0);
}
