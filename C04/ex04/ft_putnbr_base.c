/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:27:44 by abenba            #+#    #+#             */
/*   Updated: 2024/07/07 15:25:59 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *b, int len)
{
	int	i;
	int	j;

	i = 0;
	if (b == '\0' || len == 1)
		return (0);
	while (b[i])
	{
		if (b[i] == '-' || b[i] == '+')
			return (0);
		i++;
	}
	i = 0;
	while (b[i])
	{
		j = i + 1;
		while (b[j])
		{
			if (b[i] == b[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(long int nb, int len, char *base)
{
	if (nb >= len)
	{
		ft_putnbr((nb / len), len, base);
		ft_putnbr((nb % len), len, base);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb, len, base);
	}
	else
	{
		ft_putchar(base[nb]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		ch;
	int		len;
	long	nb;

	len = 0;
	while (base[len])
		len++;
	ch = check(base, len);
	nb = nbr;
	if (ch)
	{
		ft_putnbr(nb, len, base);
	}
}
