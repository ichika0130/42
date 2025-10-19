/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:59:16 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/01 15:00:04 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char *str = (const unsigned char *)s;

	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (void *)(str + i);
		i++;
	}
	return (NULL);
}
// #include <string.h>
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     char    a[] = "Hello, World";
//     char    *b = (char *)ft_memchr(a, 'o', 5);
//     printf ("%s", b);
// }
