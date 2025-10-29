/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:50:40 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/18 21:50:41 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	getstart(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

size_t	getend(char const *s1, char const *set)
{
	size_t	len;
	size_t	j;

	len = ft_strlen(s1) - 1;
	j = 0;
	while (s1[len] != '\0' && set[j] != '\0')
	{
		if (s1[len] == set[j])
		{
			len--;
			j = 0;
		}
		else
			j++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = getstart(s1, set);
	end = getend(s1, set);
	if (s1[start] == '\0' || end < start)
		return (ft_strdup(""));
	len = end - start + 1;
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1 + start, len);
	str[len] = '\0';
	return (str);
}

// #include <stdio.h>
// int main()
// {
//     char *str = ft_strtrim("abcaaaa", "a");
//     printf ("%s", str);
// }
