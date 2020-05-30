#include "libft.h"
void    ft_bzero(void *str, size_t n)
{
	    unsigned char *string;

	    string = (unsigned char*)str;
	        while (n--)
			    {
				    *string = 0;
				    string++;
				        }
}

