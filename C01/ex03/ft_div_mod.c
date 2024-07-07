/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:10:25 by abenba            #+#    #+#             */
/*   Updated: 2024/07/02 12:30:39 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	d;
	int	m;

	d = a / b;
	m = a % b;
	*div = d;
	*mod = m;
}

int main()
{
	int a = 5;
	int b = 2;
	int *x;
	int *y;
	ft_div_mod(a, b, x, y);
	char x1 = *x + '0';
	char x2 = *y + '0';
	write(1, &x1, 1);
	write(1, &x2, 1);
	return 0;
}
