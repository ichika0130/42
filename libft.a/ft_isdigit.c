/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:26:45 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/01 14:27:03 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char a)
{
	if (a >= 48 && a <= 57)
		return (2048);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    char a = '1';
    int b = isdigit(a);
    printf ("%d", b);
}
*/
