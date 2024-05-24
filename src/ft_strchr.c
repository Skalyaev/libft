#include "../include/libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s)
        if (*s++ == (char)c)
            return ((char *)s - 1);
    if (*s == '\0' && c == '\0')
        return ((char *)s);
    return (NULL);
}
