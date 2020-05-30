

#include "libft.h"

int ft_strncmp( const char * first, const char * second, size_t length )
{
	char *firststr;
	char *secondstr;
	unsigned int i;

	if(!first && !second)
		return (0);
	firststr = (char *)first;
	secondstr = (char *)second;
	i = 0;

	while (i < length)
	{
		if (firststr[i] != secondstr[i])
			return(firststr[i] - secondstr[i]);
		i++;
	}
	return (firststr[i] - secondstr[i]);
	
}
