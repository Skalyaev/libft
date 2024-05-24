#include "../include/libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;

    if (!dest && !src)
        return (NULL);
    if (dest < src)
        ft_memcpy(dest, src, n);
    else
    {
        d = dest + n;
        s = src + n;
        while (n--)
            *--d = *--s;
    }
    return (dest);
}
