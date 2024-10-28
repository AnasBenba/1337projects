/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:56:09 by abenba            #+#    #+#             */
/*   Updated: 2024/10/26 12:25:25 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	y;

	i = 0;
	while (s1[i])
	{
		y = 0;
		while (set[y])
		{
			if (s1[i] == set[y])
				break ;
			y++;
		}
		if (y == ft_strlen(set))
			break ;
		i++;
	}
	return (i);
}

static size_t	ft_end(char const *s1, char const *set, size_t last)
{
	size_t	end;
	size_t	y;

	end = last;
	while (s1[end])
	{
		y = 0;
		while (set[y])
		{
			if (s1[end] == set[y])
				break ;
			y++;
		}
		if (y == ft_strlen(set))
			break ;
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	y;
	size_t	last;
	size_t	end;
	char	*ptr;

	last = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	i = ft_start(s1, set);
	end = ft_end(s1, set, last);
	ptr = malloc(end - i + 2);
	if (!ptr)
		return (NULL);
	y = 0;
	while (i <= end)
	{
		ptr[y] = s1[i];
		y++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
