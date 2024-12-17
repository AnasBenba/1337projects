#include "get_next_line.h"

int main()
{
    int fd = open("file.txt", O_RDONLY);
 //   char *s;
   // s = get_next_line(fd);
    //while (s)
    //{
    char * line;
    line = get_next_line(fd);
        printf("%s", line);
        free(line);
    //}
    return (0);
}
