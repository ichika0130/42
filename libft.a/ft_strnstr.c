/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:45:32 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/18 19:45:33 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    int i;
    int j;
    int len;

    len = strlen((char *) s2);
    i = 0;
    j = 0;
    while (n != 0 &&s1[i] != '\0')
    {
        if (s1[i] == s2[j])
        {
            while (len != 0 && s1[i] == s2[j])
            {
                i++;
                j++;
                len--;
            }
            return (s1 + i);
        }
        else
        {
            j = 0;
            i++;
            n--;
        }
    }
    return (NULL);
}

// #include <stdio.h>
// int main()
// {
//     char *a = "cacat";
//     char *b = "cat";
//     char *c = ft_strnstr (a, b, 5);
//     printf ("%s", c);
// }
