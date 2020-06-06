/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrissan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 14:51:30 by akrissan          #+#    #+#             */
/*   Updated: 2020/06/06 14:52:37 by akrissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*cpy;
	int		i;

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
