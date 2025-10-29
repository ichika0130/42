/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:46:57 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/18 19:46:58 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	i;
	size_t	j;

	s_len = ft_strlen(s);
	i = 0;
	j = start;
	if (!s)
		return (NULL);
	if (len > s_len - start)
		len = s_len - start;
	if (start >= s_len)
		return (ft_strdup(""));
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>

// int main()
// {
//     const char *original = "Hello, World!";
//     char *s = ft_substr(original, 2, 5);
//     printf ("Original: %s", s);
//     free (s);
//     return (0);
// }
