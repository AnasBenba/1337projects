/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:29:15 by abenba            #+#    #+#             */
/*   Updated: 2024/12/18 17:31:45 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *c)
{
	size_t	len;

	len = 0;
	while (c[len])
		len++;
	return (len);
}

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	i;

	i = ft_strlen(s1);
	copy = (char *)malloc((i + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}

static char	*ft_join(char *ptr, const char *s1, const char *s2)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[y])
	{
		ptr[i + y] = s2[y];
		y++;
	}
	ptr[i + y] = '\0';
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	ptr_len;

	if (!s1 || !s2)
		return (NULL);
	ptr_len = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(ptr_len + 1);
	if (!ptr)
		return (NULL);
	if (ptr_len == 0)
	{
		ptr[0] = '\0';
		return (ptr);
	}
	return (ft_join(ptr, s1, s2));
}
