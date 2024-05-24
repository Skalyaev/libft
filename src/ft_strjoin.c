#include "../include/libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    size_t i;
    size_t j;
    char *str;

    i = 0;
    j = 0;
    if (!s1 || !s2)
        return (NULL);
    while (s1[i])
        i++;
    while (s2[j])
        j++;
    if (!(str = malloc(i + j + 1)))
        return (NULL);
    i = 0;
    while (*s1)
        str[i++] = *s1++;
    while (*s2)
        str[i++] = *s2++;
    str[i] = '\0';
    return (str);
}
