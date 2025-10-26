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
	int		len;

	len = 1;
	if (n < 0)
	{
		n = 0 - n;
		len++;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

long	get_power(int n, int nbr)
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

char	*convert(int i, int len, char *str, long nbr)
{
	long	pow;

	pow = get_power(len, nbr);
	while (i < len)
	{
		str[i] = nbr / pow + '0';
		nbr = nbr - ((nbr / pow) * pow);
		i++;
		pow = pow / 10;
	}
	return (str);
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
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	if (nbr < 0)
	{
		nbr = 0 - nbr;
		str[i] = '-';
		i++;
	}
	str = convert(i, len, str, nbr);
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>

// int main()
// {
//     char    *str = ft_itoa(-2147483648);
//     printf ("%s", str);
// }
