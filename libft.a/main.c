#include "libft.h"
#include <stdio.h>
#include <string.h>

// 用于 ft_strmapi 和 ft_striteri 的函数
char increment(unsigned int i, char c) { (void)i; return c + 1; }
void increment_inplace(unsigned int i, char *c) { (void)i; *c = *c + 1; }

int main(void)
{
    // ---------- ft_atoi ----------
    printf("ft_atoi(\"  -42\") = %d\n", ft_atoi("  -42"));

    // ---------- ft_bzero ----------
    char buffer[10] = "abcdefghi";
    ft_bzero(buffer, 5);
    printf("ft_bzero first 5 cleared: %s\n", buffer + 5);

    // ---------- ft_calloc ----------
    int *arr = ft_calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
        printf("ft_calloc[%d] = %d\n", i, arr[i]);
    free(arr);

    // ---------- ft_is* ----------
    printf("ft_isalnum('A') = %d\n", ft_isalnum('A'));
    printf("ft_isalpha('1') = %d\n", ft_isalpha('1'));
    printf("ft_isascii(128) = %d\n", ft_isascii(128));
    printf("ft_isdigit('9') = %d\n", ft_isdigit('9'));
    printf("ft_isprint('\\n') = %d\n", ft_isprint('\n'));

    // ---------- ft_itoa ----------
    char *itoa_str = ft_itoa(-2147483648);
    printf("ft_itoa(-2147483648) = %s\n", itoa_str);
    free(itoa_str);

    // ---------- ft_mem* ----------
    char src[] = "abcdef";
    char dest[10];
    ft_memcpy(dest, src, 6);
    printf("ft_memcpy dest = %s\n", dest);

    char overlap[10] = "123456";
    ft_memmove(overlap + 2, overlap, 4);
    printf("ft_memmove overlap = %s\n", overlap);

    printf("ft_memcmp(\"abc\", \"abd\", 3) = %d\n", ft_memcmp("abc", "abd", 3));

    char *memchr_res = ft_memchr("Hello", 'l', 5);
    printf("ft_memchr 'l' found = %c\n", memchr_res ? *memchr_res : '?');

    ft_memset(dest, 'X', 5);
    printf("ft_memset = %.5s\n", dest);

    // ---------- ft_putchar_fd, ft_putendl_fd, ft_putnbr_fd, ft_putstr_fd ----------
    ft_putchar_fd('A', 1);
    ft_putendl_fd(" <- ft_putendl_fd", 1);
    ft_putnbr_fd(42, 1); write(1, "\n", 1);
    ft_putstr_fd("Hello ft_putstr_fd\n", 1);

    // ---------- ft_strchr, ft_strrchr, ft_strdup ----------
    char *str = "abcdef";
    printf("ft_strchr 'c' = %s\n", ft_strchr(str, 'c'));
    printf("ft_strrchr 'c' = %s\n", ft_strrchr(str, 'c'));
    char *dup = ft_strdup(str);
    printf("ft_strdup = %s\n", dup);
    free(dup);

    // ---------- ft_striteri, ft_strmapi ----------
    char mod_str[] = "abcd";
    ft_striteri(mod_str, increment_inplace);
    printf("ft_striteri = %s\n", mod_str);

    char *mapped = ft_strmapi("abcd", increment);
    printf("ft_strmapi = %s\n", mapped);
    free(mapped);

    // ---------- ft_strjoin, ft_strlen, ft_strlcat, ft_strlcpy ----------
    char *joined = ft_strjoin("Hello, ", "World!");
    printf("ft_strjoin = %s\n", joined);
    free(joined);

    printf("ft_strlen(\"Hello\") = %zu\n", ft_strlen("Hello"));

    char lcat[20] = "Hi";
    ft_strlcat(lcat, " there", sizeof(lcat));
    printf("ft_strlcat = %s\n", lcat);

    char lcpy[10];
    ft_strlcpy(lcpy, "HelloWorld", sizeof(lcpy));
    printf("ft_strlcpy = %s\n", lcpy);

    // ---------- ft_strncmp, ft_strnstr ----------
    printf("ft_strncmp(\"abc\", \"abd\", 2) = %d\n", ft_strncmp("abc", "abd", 2));
    printf("ft_strnstr(\"Hello World\", \"World\", 11) = %s\n", ft_strnstr("Hello World", "World", 11));

    // ---------- ft_strtrim, ft_substr ----------
    char *trimmed = ft_strtrim("  aaHelloaa  ", " a");
    printf("ft_strtrim = '%s'\n", trimmed);
    free(trimmed);

    char *substr = ft_substr("Hello, World", 7, 5);
    printf("ft_substr = %s\n", substr);
    free(substr);

    // ---------- ft_tolower, ft_toupper ----------
    printf("ft_tolower('A') = %c\n", ft_tolower('A'));
    printf("ft_toupper('a') = %c\n", ft_toupper('a'));

    return 0;
}
