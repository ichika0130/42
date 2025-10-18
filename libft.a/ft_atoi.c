/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 01:18:07 by xdeng             #+#    #+#             */
/*   Updated: 2025/07/17 13:24:15 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sign_check(char *str)
{
	int	j;
	int	m_sign;

	j = 0;
	m_sign = 1;
	while (str[j] < '0' || str[j] > '9')
	{
		if (str[j] == '-')
		{
			m_sign = -m_sign;
			j++;
		}
		else if (str[j] == '+' || str[j] == ' '
			|| str[j] == '\t' || str[j] == '\n'
			|| str[j] == '\v' || str[j] == '\f' || str[j] == '\r')
			j++;
		else if (str[j] < '0' || str[j] > '9')
			return (0);
	}
	return (m_sign);
}

int	ft_atoi(char *str)
{
	int		j;
	int		nbr;
	int		m_sign;

	nbr = 0;
	j = 0;
	m_sign = ft_sign_check(str);
	while (str[j] < '0' || str[j] > '9')
		j++;
	while (str[j] >= '0' && str[j] <= '9')
	{
		nbr = nbr * 10 + (str[j] - '0');
		j++;
	}
	return (nbr * m_sign);
}
/*
int main()
{
	char *str = "-a";
	int a = ft_atoi(str);
	printf ("%d", a);
}
*/
