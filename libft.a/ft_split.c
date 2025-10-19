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

char    **ft_split(char const *s, char c)
{
    char **result;
    int i;
    int j;
    int k;

    if (!s || !(result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1))))
        return (0);
    i = 0;
    j = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            k = i;
            while (s[k] && s[k] != c)
                k++;
            result[j++] = ft_substr(s, i, k - i);
            i = k;
        }
        else
            i++;
    }
    result[j] = 0;
    return (result);
}