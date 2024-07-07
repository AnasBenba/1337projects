/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:40:53 by abenba            #+#    #+#             */
/*   Updated: 2024/07/07 13:42:08 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*h;
	unsigned char	c;
	unsigned char	r;

	i = 0;
	h = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			c = str[i] / 16;
			r = str[i] % 16;
			ft_putchar('\\');
			ft_putchar(h[c]);
			ft_putchar(h[r]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
