/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:28:15 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/18 19:47:53 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	if (i == size)
		return (i);
	else if (i < size)
	{
		while (src[j] != '\0')
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		return (i);
	}
}

// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     unsigned int rst;
//     char t1[30] = "Hello, World";
//     char t2[] = "Hallo";
//     rst = ft_strlcat(t1, t2, 20);
//     printf("%s\n", t1);
//     printf ("%d", rst);
// }
