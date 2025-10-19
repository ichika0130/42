/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:50:40 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/18 21:50:41 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  getstart(char const *s1, char const *set)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while (s1[i] != '\0' && set[j] != '\0')
    {
        if (s1[i] == set[j])
        {
            i++;
            j = 0;
        }
        else
            j++;
    }
    return (i);
}

size_t  getend(char const *s1, char const *set)
{
    size_t  len;
    size_t  j;

    len = ft_strlen(s1) - 1;
    j = 0;
    while (s1[len] != '\0' && set[j] != '\0')
    {
        if (s1[len] == set[j])
        {
            len--;
            j = 0;
        }
        else
            j++;
    }
    return (len);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  end;
    size_t  len;
    size_t  i;

    start = getstart(s1, set);
    end = getend(s1, set);
    len = end - start + 1;
    i = 0;
    if (*s1 == '\0')
        return ('\0');
    char    *str = malloc (len + 1);
    if (str == NULL)
        return (NULL);
    while (i < len)
    {
        str[i] = s1[start];
        i++;
        start++;
        if (i == len)
            str[i] = '\0';
    }
    return (str);
}

// #include <stdio.h>
// int main()
// {
//     char *str = ft_strtrim("abcaaaa", "a");
//     printf ("%s", str);
// }
