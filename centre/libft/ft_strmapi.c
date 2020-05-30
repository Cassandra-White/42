#include "libft.h"

char			*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*string;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	if (!(string = malloc(ft_strlen(s) * sizeof(char) + 1)))
		return (0);
	while (s[i])
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}
