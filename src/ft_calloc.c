#include "../include/libft.h"

void* ft_calloc(size_t sizetype, size_t size)
{
    const size_t total = sizetype * size;
    void* const dst = malloc(total);
    if (!dst) return (NULL);

    char* ptr = dst;
    while (total--) *ptr++ = 0;
    return dst;
}
