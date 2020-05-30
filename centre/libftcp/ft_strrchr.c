
#include "libft.h"


char	*ft_strrchr(const char *string, int searchedChar)
{
	char	*result;
	int		i;

	i = 0;
	result = 0;
	if (searchedChar == 0)
	{
		while (string[i])
			i++;
		return ((char*)&string[i]);
	}
	while (string[i])
	{
		if ((char)searchedChar == string[i])
			result = (char *)(string + i);
		i++;
	}
	return (result);
}
