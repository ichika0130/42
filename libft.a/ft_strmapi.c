/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:49:53 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/18 19:49:54 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len;
    int i;

    len = ft_strlen(s);
    i = 0;
    char *str = malloc (len + 1);
    ft_strncpy(str, s);
    str[len] = '\0';
    while (i < len)
    {
        str[i] = f(i, str[i]);
        i++;
    }
    return (str);
}

#include <stdio.h>
char    test(unsigned int i, char c)
{
    return (c + 1);
}

int main()
{
    char    *str = ft_strmapi("abcd, Hello, World", test);
    printf ("%s", str);
}
