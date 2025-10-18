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

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
		return (0);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	len;
	char	temp[len];
	int	j;
	int	m;

	len = ft_strlen((char *)src);
	m = n;
	j = 0;
	while (n != 0)
	{
		temp[j] = *(char *)src;
		src = (char *)src + 1;
		n--;
		j++;
	}
	j = 0;
	while (m != 0)
	{
		*(char *)dest = temp[j];
		dest = (char *)dest + 1;
		m--;
		j++;
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
//     first = str;
//     printf("Original string :%s\n ", str);
//     ft_memmove(first + 8, first, 10);
//     printf("memmove overlap : %s\n ", str);
//     return 0;
// }
