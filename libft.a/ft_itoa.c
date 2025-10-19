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

int get_len (int n)
{
    int len;
    long    i;

    i = n;
    len = 1;
    if (i < 0)
    {
        i = 0 - i;
        len++;
    }
    while (i > 9)
    {
        i = i / 10;
        len++;
    }
    return (len);
}

long    get_power(int   n, int  nbr)
{
    long    i;

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

char *ft_itoa(int n)
{
    int len;
    int i;
    int j;
    long    k;
    long    nbr;

    len = get_len(n);
    nbr = n;
    i = 0;
    k = get_power(len, n);
    char *str = malloc (len + 1);
    if (str == NULL)
        return (NULL);
    if (nbr < 0)
    {
        nbr = 0 - nbr;
        str[i] = '-';
        i++;
    }
    while (i < len)
    {
        j = nbr / k;
        str[i] = j + '0';
        nbr = nbr - (j * k);
        i++;
        k = k / 10;
    }
    str[i] = '\0';
    return (str);
}

// #include <stdio.h>

// int main()
// {
//     char    *str = ft_itoa(-2147483648);
//     printf ("%s", str);
// }
