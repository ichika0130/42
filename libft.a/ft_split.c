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

//for getting how many arrys needed (+1 for NULL)
size_t  count_words(const char *s, char c)
{
    size_t  i;
    size_t  count;

    i = 0;
    count = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            i++;
        else if (s[i] != c)
        {
            while(s[i] != c && s[i] != '\0')
                i++;
            count++;
        }
    }
    return (count);
}

char **get_words(const char *s, char c, size_t count, char **str)
{
    size_t  i; //for s
    size_t  j; //for str[count]
    size_t  len; //for word length
    size_t  start;

    i = 0;
    j = 0;
    len = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c && s[i] != '\0') //skip c
            i++;
        if (s[i] == '\0')
            break;
        start = i;
        while (s[i] != c && s[i] != '\0') //get word length
        {
            i++;
            len++;
        }
        str[count] = malloc ((len + 1) * sizeof(char));
        if (str[count] == NULL) //if malloc failed, need to free it
        {
            j = 0;
            while (j < count)
            {
                free (str[j]);
                j++;
            }
            return (NULL);
        }
        while (j < len)
        {
            str[count][j] = s[j + start];
            j++;
        }
        str[count][j] = '\0';
        count++;
        len = 0;
        j = 0;
    }
    return (str);
}

char    **ft_split(char const *s, char c)
{
    size_t  count;

    count = count_words(s, c);
    if (count == 0)
    {
        char **str = malloc(1 * sizeof(char *));
        str[0] = NULL;
        return (str);
    }
    char **str = malloc ((count + 1) * sizeof(char *));
    if (str == NULL)
        return (NULL);
    str = get_words(s, c, 0, str); //why 0? cuz it starts from 0
    str[count] = NULL;
    return (str);
}