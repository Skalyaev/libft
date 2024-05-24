#include "../include/libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *str;

    i = 0;
    if (!s || !f)
        return (NULL);
    while (s[i])
        i++;
    if (!(str = malloc(i + 1)))
        return (NULL);
    str[i] = '\0';
    i = 0;
    while (*s++)
    {
        str[i] = (*f)(i, *(s - 1));
        i++;
    }
    return (str);
}
