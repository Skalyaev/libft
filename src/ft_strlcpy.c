#include "../include/libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;

    i = 0;
    if (!dest || !src)
        return (0x0);
    while (src[i])
        i++;
    if (size == 0)
        return (i);
    while (size-- > 1 && *src)
        *dest++ = *src++;
    *dest = '\0';
    return (i);
}
