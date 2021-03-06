/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrissan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 13:09:48 by akrissan          #+#    #+#             */
/*   Updated: 2020/06/06 16:47:42 by akrissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *srcs, size_t size)
{
	char		*dest;
	const char	*src;

	dest = destination;
	src = srcs;
	if (!destination && !srcs)
		return (0);
	while (size-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (destination);
}
