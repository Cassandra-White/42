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
	printf("0, 2\n");
	ft_putnbr_fd(0, 2);

	printf("\n\nTEST 1 :\n");                
        printf("5,1\n");
	ft_putnbr_fd(5, 1);

	printf("\n\nTEST 2 :\n");                
        printf("-5, 2\n");
	ft_putnbr_fd(-5, 2);

	printf("\n\nTEST 3 :\n");                
        printf("42, 1\n");
	ft_putnbr_fd(42, 1);

	printf("\n\nTEST 4 :\n");        
        printf("-57, 2\n");
	ft_putnbr_fd(-57, 2);

	printf("\n\nTEST 5 :\n");                
        printf("164189, 1\n");
	ft_putnbr_fd(164189, 1);

	printf("\n\nTEST 6 :\n");                
        printf("-987441, 2\n");
	ft_putnbr_fd(-987441, 2);

	printf("\n\nTEST 7 :\n");                
        printf("2147483647, 1\n");
	ft_putnbr_fd(2147483647, 1);

	printf("\n\nTEST 8 :\n");                
        printf("-2147483648LL, 2\n");
	ft_putnbr_fd(-2147483648LL, 2);



	return (0);
}

