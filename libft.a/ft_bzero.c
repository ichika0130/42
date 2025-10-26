/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:24:41 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/01 14:26:15 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n != 0)
	{
		*(char *)s = '\0';
		n--;
		s = (char *)s + 1;
	}
}
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main()
// {
//     char str1[] = "Hello, World";
//     char str2[] = "Hello, World";
//     ft_bzero(str1 + 4, sizeof(char));
//     bzero(str2 + 4, sizeof(char));
//     printf ("%s\n", str1);
//     printf ("%s", str2);
// }
