/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 07:43:52 by abenba            #+#    #+#             */
/*   Updated: 2024/10/28 19:41:00 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_overlap(unsigned char *d, unsigned char *s, size_t len)
{
	while (len)
	{
		d[len - 1] = s[len - 1];
		len--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (d > s)
	{
		ft_overlap(d, s, len);
	}
	else
	{
		while (len)
		{
			d[i] = s[i];
			i++;
			len--;
		}
	}
	return (d);
}
