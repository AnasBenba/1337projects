#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    size_t  len;
    size_t  i;

    len = ft_strlen(s) + 1;
    i = 0;
    while (i < len)
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd, "\n", 1);
}