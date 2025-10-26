/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:46:30 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/18 19:46:31 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    if (size != 0 && nmemb > ((size_t)-1) / size)
    //check if the required memory is too big or not
        return (NULL);
    void    *arr = malloc (nmemb * size);
    if (arr == NULL)
        return (NULL);
    else
        ft_memset (arr, 0, nmemb * size);
    return (arr);
}

// #include <stdio.h>
// int main()
// {
//     int n;
//     int i;

//     i = 0;
//     n = 5;
//     int *arr = ft_calloc(3, sizeof(int));
//     if (arr == NULL)
//     {
//         printf ("Failed to malloc\n");
//         return (1);
//     }
//     while (i < n)
//     {
//         arr[i] = i + 1;
//         i++;
//     }
//     i = 0;
//     while (i < n)
//     {
//         printf ("%d", arr[i]);
//         i++;
//     }
//     free (arr);
//     return (0);
// }
