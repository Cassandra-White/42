
#include "libft.h"

char    *ft_strdup(const char *source)
{
	char    *cpy;
	int        i;

	i = 0;
	while (source[i])
		i++;
	if (!(cpy = (char *)malloc((i * sizeof(char)) + 1)))
		return (0);
	i = -1;
	while (source[++i])
		cpy[i] = source[i];
	cpy[i] = '\0';
	return (cpy);
}
