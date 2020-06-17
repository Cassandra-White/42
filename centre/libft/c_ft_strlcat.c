#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>
#include <string.h>



static void             ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}


static void             check_strlcat(char *dest, char *src, int size, int dest_len)
{
	ft_print_result(ft_strlcat(dest, src, size));
	write(1, "\n", 1);
	write(1, dest, dest_len);
	free(dest);
}



static void             check_strlcattrue(char *dest, char *src, int size, int dest_len)
{
        ft_print_result(strlcat(dest, src, size));
        write(1, "\n", 1);
        write(1, dest, dest_len);
        free(dest);
}



int             main(void)
{



	printf("============================================================================================\n");
	printf("============================================================================================\n");
	printf("\n");
	printf("                                        FT_STRLCAT\n");
	printf("\n");
	printf("============================================================================================\n");
	printf("============================================================================================\n");




	char    *dest;
	int             dest_len;

	dest_len = 15;
	if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
		return (0);
	memset(dest, 0, dest_len);
	memset(dest, 'r', 6);



printf("\n\nTEST1 :\n");
        dest_len = 15;
        if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
                return (0);
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);
	dest[11] = 'a';


	check_strlcat(dest, "lorem", 15, dest_len);

printf("\nTEST1 strlcat() :\n");
        dest_len = 15;
        if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
                return (0);
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);


        check_strlcattrue(dest, "lorem", 15, dest_len);


/*----------------------------------------------------------------------------------------*/


printf("\n\nTEST2 :\n");
        dest_len = 15;
        if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
                return (0);
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);

	check_strlcat(dest, "", 15, dest_len);


printf("\nTEST2 strlcat() :\n");
        dest_len = 15;
        if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
                return (0);
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);

        check_strlcattrue(dest, "", 15, dest_len);

/*----------------------------------------------------------------------------------------*/



printf("\n\nTEST3 :\n");
        dest_len = 15;
        if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
                return (0);
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);

	dest[0] = '\0';
	dest[11] = 'a';
	check_strlcat(dest, "lorem ipsum", 15, dest_len);

	
printf("\nTEST3 strlcat() :\n");	
        dest_len = 15;
        if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
                return (0);
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);

        dest[0] = '\0';
        dest[11] = 'a';
        check_strlcattrue(dest, "lorem ipsum", 15, dest_len);


/*----------------------------------------------------------------------------------------*/

printf("\n\nTEST4 :\n");
        dest_len = 15;
        if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
                return (0);
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);

	dest[14] = 'a';
	check_strlcat(dest, "lorem ipsum dolor sit amet", 15, dest_len);



printf("\nTEST4 strlcat() :\n");
        dest_len = 15;
        if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
                return (0);
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);

        dest[14] = 'a';
        check_strlcattrue(dest, "lorem ipsum dolor sit amet", 15, dest_len);

/*----------------------------------------------------------------------------------------*/

printf("\n\nTEST5 :\n");
        dest_len = 15;
        if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
                return (0);
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);

	dest[10] = 'a';
	check_strlcat(dest, "lorem ipsum dolor sit amet", 0, dest_len);


printf("\nTEST5 strlcat() :\n");
  dest_len = 15;
        if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
                return (0);
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);

        dest[10] = 'a';
        check_strlcattrue(dest, "lorem ipsum dolor sit amet", 0, dest_len);


/*----------------------------------------------------------------------------------------*/

printf("\n\nTEST6 :\n");
        dest_len = 15;
        if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
                return (0);
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);

	dest[10] = 'a';
	check_strlcat(dest, "lorem ipsum dolor sit amet", 1, dest_len);



printf("\nTEST6 strlcat() :\n");
     dest_len = 15;
        if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
                return (0);
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);

        dest[10] = 'a';
        check_strlcat(dest, "lorem ipsum dolor sit amet", 1, dest_len);

/*----------------------------------------------------------------------------------------*/

printf("\n\nTEST7 :\n");
        dest_len = 15;
        if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
                return (0);
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);

	memset(dest, 'r', 15);
	check_strlcat(dest, "lorem ipsum dolor sit amet", 5, dest_len);


printf("\nTEST7 strlcat() :\n");
        dest_len = 15;
        if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
                return (0);
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);

        memset(dest, 'r', 15);
        check_strlcat(dest, "lorem ipsum dolor sit amet", 5, dest_len);


/*----------------------------------------------------------------------------------------*/



printf("\n\nTEST8 :\n");
        dest_len = 15;
        if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
                return (0);
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);

	dest[10] = 'a';
	check_strlcat(dest, "lorem ipsum dolor sit amet", 6, dest_len);


printf("\nTEST8 strlcat() :\n");
        dest_len = 15;
        if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
                return (0);
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);

        dest[10] = 'a';
        check_strlcat(dest, "lorem ipsum dolor sit amet", 6, dest_len);


/*----------------------------------------------------------------------------------------*/



printf("\n\nTEST9 :\n");
        dest_len = 15;
        if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
                return (0);
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);

	memset(dest, 'r', 14);
	check_strlcat(dest, "lorem ipsum dolor sit amet", 15, dest_len);

printf("\nTEST9 strlcat() :\n");
        dest_len = 15;
        if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)))
                return (0);
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);

        memset(dest, 'r', 14);
        check_strlcat(dest, "lorem ipsum dolor sit amet", 15, dest_len);

	printf("\n\n");

	return (0);
}
