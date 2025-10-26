/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:46:41 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/01 14:46:57 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
		return (16384);
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 35;
	b = isprint(a);
	printf("%d",b);
}
*/
