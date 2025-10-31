/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:49:44 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/18 19:49:45 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	get_power(int n)
{
	long	power;

	power = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		power *= 10;
		n /= 10;
	}
	return (power);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	power;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	power = get_power(n);
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	while (power > 0)
	{
		c = (n / power) + '0';
		write(fd, &c, 1);
		n %= power;
		power /= 10;
	}
}

// int main()
// {
//     ft_putnbr_fd (-2147483648, 1);
// }
