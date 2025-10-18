/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:27:24 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/01 14:27:56 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n != 0)
	{
		*(char *) dest = *(char *) src;
		dest = (char *)dest + 1;
		src = (char *)src + 1;
		n--;
	}
}

// #include <stdio.h>
// int main()
// {
//     char src[] = "Hello, World!";
//     char dest[20];
//     char test[20];
//     ft_memcpy(dest, src, 4);
//     memcpy(test, src, 4);
//     printf ("Mine is %s\n", dest);
//     printf ("Origin is %s", test);
// }
