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

#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (*s == c)
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
