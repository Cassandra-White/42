
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{

	unsigned const char *string1;
	unsigned const char *string2;
	unsigned int i;

	string1 = (unsigned const char *)s1;
	string2 = (unsigned const char *)s2;
	i = 0;

	while(i < n)
	{
		if (string1[i] != string2[i])
			return (string1[i] - string2[i]);
		i++;
	}
	
	return(0);
}
