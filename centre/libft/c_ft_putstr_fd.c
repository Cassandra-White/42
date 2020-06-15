#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>
int             main(void)
{



	printf("============================================================================================\n");
	printf("============================================================================================\n");
	printf("\n");
	printf("                                        FT_PUTNBR_FD\n");
	printf("\n");
	printf("============================================================================================\n");
	printf("============================================================================================\n");


	printf("\n\nTEST 1 :\n");
	printf("lorem ipsum dolor sit amet, 2\n");
	ft_putstr_fd("lorem ipsum dolor sit amet", 2);
	

        printf("\n\nTEST 2 :\n");
        printf("  lorem\\nipsum\\rdolor\\tsit amet  , 1\n");
	ft_putstr_fd("  lorem\nipsum\rdolor\tsit amet  ", 1);
	

        printf("\n\nTEST 3 :\n");
        printf("' ',2\n");
	ft_putstr_fd("", 2);
	

        printf("\n\nTEST 4 :\n");
        printf("lorem ipsum do\\0lor sit amet, 1\n");
	ft_putstr_fd("lorem ipsum do\0lor sit amet", 1);
printf("\n\n");	


	return (0);
}
