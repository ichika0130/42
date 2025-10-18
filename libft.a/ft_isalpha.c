/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:58:47 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/01 14:59:01 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(char a)
{
	if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
		return (1024);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    char c = 'J';
    int d = ft_isalpha(c);
    int e = isalpha(c);
    printf ("1st one is %d\n", d);
    printf ("right one is %d", e);
}
*/
