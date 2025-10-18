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
int ft_strlen(char* str)
{
    if (str == NULL)
        return (0);
    int count;

    count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return (count);
}

char *ft_strrchr(const char *s, int c)
{
    int i;
    char    *ptr;
    
    i = ft_strlen((char *)s);
    while (i != 0 && s[i] != c)
        i--;
    if (s[i] == c)
        return (ptr + i);
    else if (i == 0)
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
