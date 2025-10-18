#include <unistd.h>
#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;
    int len;

    len = ft_strlen(s);
    i = 0;
    while (i < len)
    {
        f(i, &s[i]);
        i++;
    }
}

#include <stdio.h>

void    test(unsigned int i, char *c)
{
    *c = *c + 1;
}

int main()
{
    char    str[] = "abcd, Hello, Wolrd";
    ft_striteri(str, test);
    printf ("%s", str);
}