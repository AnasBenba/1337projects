/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:58:19 by abenba            #+#    #+#             */
/*   Updated: 2024/10/27 11:03:32 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_isdeli(char const *s, char c, size_t i)
{
	if (s[i] == c)
		return (1);
	return (0);
}

static char	*ft_word(char const *s, char c, size_t *i)
{
	size_t	word;
	size_t	y;
	char	*ptr;

	word = 0;
	while (s[(*i)] && s[(*i)] != c)
	{
		word++;
		(*i)++;
	}
	*i = *i - word;
	y = 0;
	ptr = malloc(word + 1);
	if (!ptr)
		return (NULL);
	while (s[(*i)] && s[(*i)] != c)
	{
		ptr[y] = s[(*i)];
		(*i)++;
		y++;
	}
	ptr[y] = '\0';
	(*i)++;
	return (ptr);
}

static size_t	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (ft_isdeli(s, c, i))
			i++;
		if (ft_isalpha(s[i]))
			count++;
		while (ft_isalpha(s[i]))
			i++;
	}
	return (count);
}

static void	ft_free(char **ptr)
{
	size_t	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	i;
	size_t	y;
	char	**ptr;

	if (!s)
		return (NULL);
	i = 0;
	y = 0;
	len = ft_count_word(s, c);
	ptr = malloc(sizeof(char *) * len + 1);
	if (!ptr)
		return (NULL);
	while (y < len)
	{
		while (s[i] == c)
			i++;
		ptr[y] = ft_word(s, c, &i);
		if (ptr[y] == NULL)
			ft_free(ptr);
		y++;
	}
	ptr[y] = NULL;
	return (ptr);
}
