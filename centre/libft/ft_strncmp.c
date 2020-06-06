/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrissan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 15:21:06 by akrissan          #+#    #+#             */
/*   Updated: 2020/06/06 15:22:57 by akrissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	char			*firststr;
	char			*secondstr;
	unsigned int	i;

	if (!first && !second)
		return (0);
	firststr = (char *)first;
	secondstr = (char *)second;
	i = 0;
	if (length == 0)
		return (0);
	while (i < (length - 1) && firststr[i] && secondstr[i])
	{
		if (firststr[i] != secondstr[i])
			return (firststr[i] - secondstr[i]);
		i++;
	}
	return ((unsigned char)firststr[i] - (unsigned char)secondstr[i]);
}
