

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list    *new;

	if (!(new = (t_list*)malloc(sizeof(*new) * 1)))
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);

}
