#include "../include/libft.h"

char *ft_strtrim(const char *s1, const char *set)
{
    size_t len;

    if (!s1 || !set)
        return (NULL);
    while (*s1 && ft_strchr(set, *s1))
        ++s1;
    len = ft_strlen(s1);
    while (len && ft_strchr(set, s1[len]))
        --len;
    return (ft_substr((char *)s1, 0, len + 1));
}
