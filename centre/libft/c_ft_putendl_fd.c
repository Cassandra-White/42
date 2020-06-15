#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>
int             main(void)
{



        printf("============================================================================================\n");
        printf("============================================================================================\n");
        printf("\n");
        printf("                                        FT_PUTENDL_FD\n");
        printf("\n");
        printf("============================================================================================\n");
        printf("============================================================================================\n");


		printf("\n\nTEST 1 :\n");		
		printf("lorem ipsum dolor sit amet, 2\n");
                ft_putendl_fd("lorem ipsum dolor sit amet", 2);
                

                printf("\n\nTEST 2 :\n");
		printf("\\nlorem\\nipsum\\rdolor\\tsit amet  , 1\n");
		ft_putendl_fd("  lorem\nipsum\rdolor\tsit amet  ", 1);
                

                printf("\n\nTEST 3 :\n");
		printf("\n' ', 2\n");
		ft_putendl_fd("", 2);
                

                printf("\n\nTEST 4 :\n");
		printf("\nlorem ipsum do\\0lor sit amet, 1\n");
		ft_putendl_fd("lorem ipsum do\0lor sit amet", 1);
		printf("\n\n");        

	return (0);
}
