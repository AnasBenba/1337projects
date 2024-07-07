/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 20:27:03 by abenba            #+#    #+#             */
/*   Updated: 2024/06/29 21:18:22 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	y;
	int	temp;

	i = 0;
	while (i < size)
	{
		y = 1;
		while (y < size)
		{
			if (tab[y - 1] > tab[y])
			{
				temp = tab[y - 1];
				tab[y - 1] = tab[y];
				tab[y] = temp;
			}
			y++;
		}
		i++;
	}
}
