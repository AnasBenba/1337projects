#include "get_next_line.h"

char *ft_fill(int fd, char *last, char **line)
{
	char	*buffer;
	ssize_t	bytes;
	int		i;

	i = 0;
	buffer = (char *)ft_calloc(BUFFER_SIZE + 1 ,sizeof(char));
	if (!buffer)
		return (NULL);
	bytes = read(fd, buffer, BUFFER_SIZE);
	if (bytes < 0)
		return (NULL);
	if (last)
		last = ft_strjoin(last, buffer);
	else
		last = buffer;
	while (last[i] != '\n' && last[i] != '\0')
		i++;
	*line = ft_substr(last, 0, i + 1);
	return (last);
}

char *get_next_line(int fd)
{
	static char	*last;
	char 		*line;
	char		*temp;
	int			i;

	line = NULL;
	i = 0;
	if (fd < 0 && BUFFER_SIZE < 0)
	{
		free(last);
		last = NULL;
	}
	last = ft_fill(fd, last, &line);
	if (!last)
	{
		free(last);
		return (NULL);
	}
	while (last[i] != '\n' && last[i] != '\0')
		i++;
	temp = ft_substr(last, i + 1, ft_strlen(last));
	free(last);
	last = temp;
	return (line);
}