
#include "libft.h"

void *ft_memcpy( void * destination, const void * source, size_t size )
{
	char *dest;
	const char *src;
       
	dest = destination;
	src = source;

	if (!destination && !source)
		return(0);
	while(size-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}	
	return(destination);
}
