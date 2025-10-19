/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:47:23 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/18 19:47:25 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset (void *s, int c, size_t n) 
//fills the first n bytes of the memory area
//pointed to by s with the constant byte c
{
    void *ptr = s;
    while (n != 0)
    {
        *(char *)s = c;
        n--;
        s = (char *)s + 1;
    }
    return (ptr);
}
// #include <string.h>
// #include <ctype.h>
// #include <stdio.h>
// int main()
// {
//     int arr[10];
//     char str[20] = "Hello, World";
//     ft_memset (str + 3, 'A', 4*sizeof(char));
//     printf ("%s", str);
// }
