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

int	ft_sign_check(const char *str)
{
	int	j;
	int	m_sign;

	j = 0;
	m_sign = 1;
	while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n' || str[j] == '\v'
		|| str[j] == '\f' || str[j] == '\r')
		j++;
	if (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
			m_sign = -1;
		j++;
	}
	if (!(str[j] >= '0' && str[j] <= '9'))
		return (0);
	return (m_sign);
}

int	ft_atoi(const char *str)
{
	int	j;
	int	nbr;
	int	m_sign;

	if (!str)
		return (0);
	j = 0;
	nbr = 0;
	while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n' || str[j] == '\v'
		|| str[j] == '\f' || str[j] == '\r')
		j++;
	m_sign = ft_sign_check(str + j);
	if (m_sign == 0)
		return (0);
	if (str[j] == '+' || str[j] == '-')
		j++;
	while (str[j] >= '0' && str[j] <= '9')
	{
		nbr = nbr * 10 + (str[j] - '0');
		j++;
	}
	return (nbr * m_sign);
}
/*
int	main(void)
{
	char	*str;
	int		a;

	str = "-a";
	a = ft_atoi(str);
	printf ("%d", a);
}
*/
