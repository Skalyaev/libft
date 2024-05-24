#include "../include/libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char temp[n];
    char *d;
    const char *s;
    size_t len;

    d = dest;
    s = src;
    len = n;
    while (n--)
    {
        temp[n] = *s++;
        if (temp[n] == (char)c)
        {
            while (len-- > n)
                *d++ = temp[len];
            return (d);
        }
    }
    while (len--)
        *d++ = temp[len];
    return (NULL);
}
