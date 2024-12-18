/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:24:49 by abenba            #+#    #+#             */
/*   Updated: 2024/12/18 17:40:54 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&str[i]);
	return (NULL);
}

char	*fill_buffer(int fd, char *left, char *buffer)
{
	int		chr_read;
	char	*tmp;

	chr_read = 1;
	while (chr_read)
	{
		chr_read = read(fd, buffer, BUFFER_SIZE);
		if (chr_read < 0)
		{
			free(left);
			left = NULL;
			break ;
		}
		if (chr_read == 0)
			break ;
		buffer[chr_read] = '\0';
		if (!left)
			left = ft_strdup("");
		tmp = left;
		left = ft_strjoin(tmp, buffer);
		free(tmp);
		if (ft_strchr(left, '\n'))
			break ;
	}
	return (free(buffer), buffer = NULL, left);
}

char	*make_line(char *left, char **line)
{
	int		i;
	char	*tmp;

	i = 0;
	while (left && left[i] != '\n' && left[i] != '\0')
		i++;
	if (left && left[i] == '\0')
	{
		if (left[0] == '\0')
			*line = NULL;
		else
			*line = ft_strdup(left);
		free(left);
		left = NULL;
	}
	else if (left)
	{
		*line = ft_substr(left, 0, i + 1);
		tmp = left;
		left = ft_substr(left, i + 1, ft_strlen(left) - i);
		free(tmp);
	}
	return (left);
}

char	*get_next_line(int fd)
{
	static char	*left[1024];
	char		*line;
	char		*buffer;

	line = NULL;
	if (fd > 1024)
		return (NULL);
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (free(left[fd]), left[fd] = NULL, NULL);
	buffer = (char *)malloc(((size_t)BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	left[fd] = fill_buffer(fd, left[fd], buffer);
	if (!left[fd])
		return (NULL);
	left[fd] = make_line(left[fd], &line);
	return (line);
}
