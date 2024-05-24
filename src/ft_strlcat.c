#include "../include/libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (src[i])
        i++;
    while (dest[j] && j < size)
        j++;
    if (j == size)
        return (i + j);
    dest += j;
    while (size-- > 1 + j && *src)
        *dest++ = *src++;
    *dest = '\0';
    return (i + j);
}
