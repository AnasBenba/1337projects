/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:18:17 by abenba            #+#    #+#             */
/*   Updated: 2024/10/26 11:40:27 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		index;
	char	r;
	char	*str;

	i = 0;
	index = 0;
	r = (char)c;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == r)
			index = i;
		i++;
	}
	return (&str[index]);
}
