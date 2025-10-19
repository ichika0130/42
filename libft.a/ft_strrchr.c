/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:46:09 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/18 19:46:16 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    
    i = ft_strlen((char *)s);
    while (i != 0)
    {
        if (s[i] == c)
            return ((char *)s + i);
        i--;
    }
    return (NULL);
}
// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a = *ft_strrchr("Helloeea", 'e');
//     printf ("%c", a);
// }
