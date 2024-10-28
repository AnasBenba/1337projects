/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:56:55 by abenba            #+#    #+#             */
/*   Updated: 2024/10/26 09:12:47 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	r;
	char	*str;

	i = 0;
	r = c;
	str = (char *)s;
	if (r == '\0')
		return ("\0");
	while (str[i])
	{
		if (str[i] == r)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
