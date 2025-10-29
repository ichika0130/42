/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:50:02 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/18 21:52:57 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

long	get_power(int n, long nbr)
{
	long	i;

	i = 1;
	if (nbr < 0)
		n--;
	while (n > 1)
	{
		i = i * 10;
		n--;
	}
	return (i);
}

void	convert(int i, int len, char *str, long nbr)
{
	long	pow;
	int		digits;

	digits = len - i;
	pow = 1;
	while (digits > 1)
	{
		pow = pow * 10;
		digits--;
	}
	while (i < len)
	{
		str[i] = (char)(nbr / pow + '0');
		nbr = nbr % pow;
		i++;
		if (pow > 0)
			pow /= 10;
	}
	str[i] = '\0';
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	long	nbr;
	char	*str;

	nbr = n;
	len = get_len(nbr);
	i = 0;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		nbr = -nbr;
		str[i] = '-';
		i++;
	}
	convert(i, len, str, nbr);
	return (str);
}

// #include <stdio.h>

// int main()
// {
//     char    *str = ft_itoa(-2147483648);
//     printf ("%s", str);
// }
