/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 00:03:01 by abenba            #+#    #+#             */
/*   Updated: 2024/07/06 17:53:06 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	str = ft_strlowcase(str);
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && flag == 0)
		{
			str[i] -= 32;
			flag = 1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			flag = 1;
		else if ((str[i] < '0' || str[i] > '9')
			&& (str[i] < 'a' || str[i] > 'z'))
			flag = 0;
		i++;
	}
	return (str);
}
