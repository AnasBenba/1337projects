/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:26:33 by abenba            #+#    #+#             */
/*   Updated: 2024/06/29 19:26:14 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	y;
	int	len;
	int	temp;

	i = 0;
	y = size - 1;
	len = size / 2;
	while (i < len)
	{
		temp = tab[i];
		tab[i] = tab[y];
		tab[y] = temp;
		i++;
		y--;
	}
}
