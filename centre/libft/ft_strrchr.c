/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrissan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 15:17:30 by akrissan          #+#    #+#             */
/*   Updated: 2020/06/06 15:18:56 by akrissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedchar)
{
	char	*result;
	int		i;

	i = 0;
	result = 0;
	if (searchedchar == 0)
	{
		while (string[i])
			i++;
		return ((char*)&string[i]);
	}
	while (string[i])
	{
		if ((char)searchedchar == string[i])
			result = (char *)(string + i);
		i++;
	}
	return (result);
}
