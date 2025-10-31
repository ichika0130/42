/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   (not done)ft_split.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:50:37 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/18 19:50:38 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// for getting how many arrys needed (+1 for NULL)
size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
	}
	return (count);
}

char	*malloc_word(const char *s, size_t start, size_t len)
{
	char	*word;
	size_t	i;

	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**get_words(const char *s, char c, size_t count, char **str)
{
	size_t	i;
	size_t	start;
	size_t	len;

	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		len = i - start;
		str[count] = malloc_word(s, start, len);
		if (!str[count])
		{
			while (count > 0)
				free(str[--count]);
			return (NULL);
		}
		count++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**str;

	count = count_words(s, c);
	str = malloc((count + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str = get_words(s, c, 0, str);
	if (!str)
		return (NULL);
	str[count] = NULL;
	return (str);
}