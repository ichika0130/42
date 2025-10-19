/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:49:20 by xdeng             #+#    #+#             */
/*   Updated: 2025/10/18 19:49:21 by xdeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char* str)
{
    size_t count;

    count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return (count);
}
/*
int main()
{
    char* test = " 2 4 ";
    int a = ft_strlen(test);
    char b = a + 48;
    write (1, &b, 1);
}
*/
