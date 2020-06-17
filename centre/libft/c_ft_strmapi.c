#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <stdio.h>
#include <string.h>

static void             ft_print_result(char const *s)
{
        int             len;

        len = 0;
        while (s[len])
                len++;
        write(1, s, len);
}

static char             mapi(unsigned int i, char c)
{
        static int indexArray[11] = {0};

        if (i > 10 || indexArray[i] == 1)
                write(1, "wrong index\n", 12);
        else
                indexArray[i] = 1;
        if (c >= 'a' && c <= 'z')
                return (c - 32);
        else if (c >= 'A' && c <= 'Z')
                return (c + 32);
        else
                return (c);
}



int             main(void)
{



        printf("============================================================================================\n");
        printf("============================================================================================\n");
        printf("\n");
        printf("                                        FT_STRMAPI\n");
        printf("\n");
        printf("============================================================================================\n");
        printf("============================================================================================\n");

	        char    *str;
        char    *strmapi;

        str = (char *)malloc(sizeof(*str) * 12);
        if  (!str)
                return (0);
	strcpy(str, "LoReM iPsUm");

	printf("\n\nTEST :\n");
	
	printf("\n'LoReM iPsUm'\n");
	printf("resultat : \n");
        if (!(strmapi = ft_strmapi(str, &mapi)))
		ft_print_result("NULL");
        else
        {
        	ft_print_result(strmapi);
       		if (strmapi[11] != '\0')
        		ft_print_result("\nString is not null terminated");
        	if (strmapi == str)
        		ft_print_result("\nA new string was not returned");
        	else
        		free(strmapi);
    
        }
        free(str);


	printf("\n\n");

        return(0);
}
