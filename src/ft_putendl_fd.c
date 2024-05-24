#include "../include/libft.h"

void ft_putendl_fd(char *s, int fd)
{
    char end;

    if (s)
    {
        end = '\n';
        while (*s++)
            write(fd, (s - 1), 1);
        write(fd, &end, 1);
    }
}
