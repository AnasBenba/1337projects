/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:01:59 by abenba            #+#    #+#             */
/*   Updated: 2024/07/07 16:19:42 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int result;

	result = 1;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	else
	{
		result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
}
#include <stdio.h>
int main()
{
	int i = 10;
	int r = ft_recursive_factorial(i);
	printf("%d", r);
}
