#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdint.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *c);
char	*get_next_line(int fd);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t n);

#endif
