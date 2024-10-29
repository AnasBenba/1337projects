/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:31:50 by abenba            #+#    #+#             */
/*   Updated: 2024/10/26 12:26:23 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;
	size_t	src_len;

	if (!s)
		return (NULL);
	src_len = ft_strlen(s);
	i = 0;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	if (len == 0 || start >= src_len)
	{
		ptr[0] = '\0';
		return (ptr);
	}
	while (i < len && s[start])
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
