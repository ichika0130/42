/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:45:59 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/18 19:46:00 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char*s)
{
    char    *str;
    int len;
    int n;

    n = 0;
    len = ft_strlen(s);
    str = malloc (len + 1);
    if (str == NULL)
        return (NULL);
    while (n < (len + 1))
    {
        str[n] = s[n];
        n++;
    }
    return (str);
}
