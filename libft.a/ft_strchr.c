/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:30:45 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/01 14:31:11 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	i;

	i = (unsigned char)c;
	while (*s != '\0' && *s != i)
		s++;
	if (*s == i)
		return ((char *)s);
	else
		return (NULL);
}

// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a = *ft_strchr("Hello", 'e');
//     printf ("%c", a);
// }
