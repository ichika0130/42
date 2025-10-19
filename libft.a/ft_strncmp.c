/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:50:27 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/18 19:50:28 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;
    int j;
    
    i = 0;
    while ((s1[i] != '\0' || s2[i] != '\0') && n != 0)
    {
        if (s1[i] == s2[i])
        {
            i++;
            n--;
        }
        else
        {
            j = s1[i] - s2[i];
            return (j);
        }    
    }
    return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	int a = ft_strncmp("ABCD", "ABC", 4);
// 	printf ("%d", a);
// }
