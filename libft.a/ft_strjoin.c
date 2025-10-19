/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:46:49 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/18 19:46:50 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*ft_strjoin(char const *s1, char const *s2)
{
    size_t  len_s1;
    size_t  len_s2;
    size_t  len;
    size_t  i;
    char    *str;

    i = 0;
    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    len = len_s1 + len_s2;
    str = malloc ((len + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    while (len_s1 > i)
    {
        str[i] = s1[i];
        i++;
    }
    while (i < len && i >= len_s1)
    {
        str[i] = s2[i - len_s1];
        i++;
    }
    str[len] = '\0';
    return (str);
}

// #include <stdio.h>
// int main()
// {
//     char const *a = "Hello, ";
//     char const *b = "World!";
//     char *c = ft_strjoin (a, b);
//     printf ("%s", c);
//     free (c);
// }
