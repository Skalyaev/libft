#include "../include/libft.h"

char *ft_strdup(const char *s)
{
    size_t i;
    char *str;
    char *send;

    i = 0;
    while (s[i])
        i++;
    if (!(str = malloc(i + 1)))
        return (NULL);
    send = str;
    while (i--)
        *str++ = *s++;
    *str++ = *s++;
    return (send);
}
