#include "libft.h"
#include <stddef.h>

void *ft_memset(void *str, int c, size_t n)
{
	    unsigned char   *b;

	    b  = (unsigned char*)str;

	    while (n--)
		    *(b++) = (unsigned char)c;

	    return (str);
}
