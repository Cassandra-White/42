/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrissan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 13:59:47 by akrissan          #+#    #+#             */
/*   Updated: 2020/06/06 14:00:14 by akrissan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	neg;

	if (n < 0)
	{
		neg = n * -1;
		ft_putchar_fd('-', fd);
	}
	else
		neg = n;
	if (neg > 9)
		ft_putnbr_fd(neg / 10, fd);
	ft_putchar_fd(neg % 10 + '0', fd);
}
