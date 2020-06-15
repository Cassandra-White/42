#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

static void		check_memmove(void *dest, void *src, int n)
{
	if (dest != ft_memmove(dest, src, n))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dest, 22);
}
static void             check_memmovetrue(void *dest, void *src, int n)
{
        if (dest != memmove(dest, src, n))
                write(1, "dest's adress was not returned\n", 31);
        write(1, dest, 22);
}


int	main(void)
{


        printf("============================================================================================\n");
        printf("============================================================================================\n");
        printf("\n");
        printf("                                        FT_MEMMOVE\n");
        printf("\n");
        printf("============================================================================================\n");
        printf("============================================================================================\n");




	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;

	dest = src + 1;

        char    src2[] = "lorem ipsum dolor sit amet";
        char    *dest2;

        dest2 = src2 + 1;


printf("\n\nTEST1 : \n");
		check_memmove(dest, "consectetur", 5);
printf("\nTEST1 memmove(): \n");
		check_memmovetrue(dest2, "consectetur", 5);


printf("\n\nTEST2 : \n");
		check_memmove(dest, "con\0sec\0\0te\0tur", 10);
printf("\nTEST2 memmove(): \n");
		check_memmovetrue(dest2, "con\0sec\0\0te\0tur", 10);


printf("\n\nTEST3 : \n");
		check_memmove(dest, src, 8);
printf("\nTEST3 memmove(): \n");
		check_memmovetrue(dest2, src2, 8);


printf("\n\nTEST4 : \n");
		check_memmove(src, dest, 8);
printf("\nTEST4 memmove(): \n");
		check_memmovetrue(src2, dest2, 8);


printf("\n\nTEST5 : \n");
		check_memmove(src, dest, 0);
printf("\nTEST5 memmove(): \n");
		check_memmovetrue(src2, dest2, 0);
printf("\n\n");


	return (0);
}
