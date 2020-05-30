

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if( !s || !(str = malloc(((len + 1) * sizeof (char)))))
		return (0);
	if(start > ft_strlen(s))
	{
		str[0] = '\0';
		return (str);
	}
	while (i < len && s[start])
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

