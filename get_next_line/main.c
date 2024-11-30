#include "get_next_line.h"

int main()
{
    int fd = open("file.txt", O_RDONLY);
    char *s;
    s = get_next_line(fd);
    while (s)
    {
        printf("%s", s);
        free(s);
        s = get_next_line(fd);
    }
    close(fd);
    return (0);
}
