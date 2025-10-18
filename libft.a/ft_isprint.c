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

#include <unistd.h>

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
		return (16384);
	else
		return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    int a = 35;
    int b = isprint(a);
    printf("%d",b);
}
*/
