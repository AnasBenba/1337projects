/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:03:52 by abenba            #+#    #+#             */
/*   Updated: 2024/07/07 18:57:19 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_fibonacci(int index)
{
	int r;

	r = 0;
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

int main()
{
	int i = 8;
	int r = ft_fibonacci(i);
	printf("%d", r);
}
