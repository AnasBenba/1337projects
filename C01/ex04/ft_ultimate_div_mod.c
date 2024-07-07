/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:34:26 by abenba            #+#    #+#             */
/*   Updated: 2024/07/02 11:56:52 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

int main()
{
	int a = 4;
	int b = 2;
	int *p = &a;
	int *p1 = &b;

	ft_ultimate_div_mod(p, p1);
	char t = a + '0';
	char y = b + '0';

	write(1, &t, 1);
	write(1, "annanan", 7);
	write(1, "\n", 1);
	write(1, &y, 1);
	return 0;
}
