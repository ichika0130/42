/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:53:57 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/01 14:56:46 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i + 1 < size)
			dst[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		if (i < size)
			dst[i] = '\0';
		else
			dst[i - 1] = '\0';
	}
	return (i);
}

// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>
// int main ()
// {
//     char a[] = "Hello, World";
//     char b[] = "Good night";
//     ft_strlcpy(a, b, 10);
//     strlcpy(a, b , 10);
//     printf ("%s", a);
// }
