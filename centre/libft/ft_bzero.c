/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrissan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:00:24 by akrissan          #+#    #+#             */
/*   Updated: 2020/06/02 16:02:22 by akrissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char *string;

	string = (unsigned char*)str;
	while (n--)
	{
		*string = 0;
		string++;
	}
}
