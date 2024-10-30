/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 07:41:36 by abenba            #+#    #+#             */
/*   Updated: 2024/10/28 19:58:49 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(needle);
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i] && i <= len - l)
	{
		if (ft_memcmp(haystack + i, needle, l) == 0)
		{
			return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}