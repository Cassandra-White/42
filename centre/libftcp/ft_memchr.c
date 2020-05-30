
#include "libft.h"


void *ft_memchr(const void *s, int c, size_t n)
{

	const unsigned char *str;
	int i;

	i = 0;

	if(!s)
		return(0);
	str = (const unsigned char *)s;
	while(n--)
	{
		if (str[i] == c)
			return ((void *)(s + i));
		else
			i++;	
	}

	return(0);
}
