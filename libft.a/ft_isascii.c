/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:48:17 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/18 19:48:18 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int a)
{
    if (a >= 0 && a <= 127)
        return (1);
    else
        return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    int b = isascii('p');
    int c = ft_isascii('p');
    printf ("%d\n", b);
    printf ("%d", c);
}
*/
