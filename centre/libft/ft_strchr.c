/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrissan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 14:44:18 by akrissan          #+#    #+#             */
/*   Updated: 2020/06/06 14:50:33 by akrissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedchar)
{
	if (searchedchar == 0)
	{
		while (*string)
			string++;
		return ((char*)string);
	}
	while (*string)
	{
		if (*string == (unsigned char)searchedchar)
			return ((char*)(string));
		string++;
	}
	return (0);
}
