#include "libft.h"

static int	ft_sizetab(unsigned int numb)
{
	int size;

	size = 0;
	while ( numb >= 10)
	{
		numb = numb / 10;
		size++;
	}
	size ++;
	return (size);

}


char *ft_itoa(int n)
{
	int	numb;
	char		*str;
	int		size;

	size = 0;
	if (n >= 0)
		numb = n;
	if(n < 0)
	{
		numb = n * -1;
		size = 1;
	}
	size = size + ft_sizetab(numb);
	if (!(str = malloc(sizeof(char) * size + 1)))
		return (0);
	str[size] = '\0';
	while (size--)
	{
		if(numb >= 0)
			str[size] = (numb % 10) + '0';
		if (size == 0 && n < 0)
			str[size] = '-';
		numb = numb / 10;
	}
	return (str);

}
