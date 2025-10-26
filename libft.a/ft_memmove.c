/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:47:11 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/01 14:52:07 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest < src)
	{
		while (n > i)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		while (n != 0)
		{
			((char *)dest)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>
// int main()
// {
//     char str[19] = "Learningisfun";
//     char *first;
// 	}
// }

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>
// int main()
// {
//     char str[19] = "Learningisfun";
//     char *first;
//     first = str;
//     printf("Original string :%s\n ", str);
//     ft_memmove(first + 8, first, 10);
//     printf("memmove overlap : %s\n ", str);
//     return (0);
// }
