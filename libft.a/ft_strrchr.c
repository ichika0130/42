/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:46:09 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/18 19:46:16 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	j;

	j = (unsigned char)c;
	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == j)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[] = "tripouille";
// 	char s2[] = "ltripouiel";
// 	char s3[] = "";
//     char *a = ft_strrchr(s3, 0);
//     printf ("%s", a);
// }
