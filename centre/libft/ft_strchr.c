
#include "libft.h"

char * ft_strchr( const char *string, int searchedChar )
{
	if (searchedChar == 0)
	{
		while (*string)
			string++;
		return ((char*)string);
	}

	while(*string)
	{
		if(*string == (unsigned char)searchedChar)
			return ((char*)(string));
		string++;
	}
	return(0);
}
