/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 07:44:39 by abenba            #+#    #+#             */
/*   Updated: 2024/10/25 08:03:08 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	s;
	void	*ptr;

	s = count * size;
	ptr = malloc(s);
	if (!ptr)
		return (NULL);
	if (count == 0 || size == 0)
		ft_memset(ptr, 0, 1);
	else
		ft_memset(ptr, 0, s);
	return (ptr);
}