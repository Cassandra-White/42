
#include "libft.h"

char * ft_strchr( const char *string, int searchedChar )
{
	if(!string)
		return(0);
	if (searchedChar == 0)
	{
		while (*string)
			string++;
		return ((char*)string);
	}

	while(*string)
		if(*string == (unsigned char)searchedChar)
			return ((char*)(string));
	return(0);
}
