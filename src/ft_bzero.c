#include "../include/libft.h"

void ft_bzero(void* const src, size_t size)
{
    char* ptr = src;
    while (size--) *ptr++ = 0;
}
