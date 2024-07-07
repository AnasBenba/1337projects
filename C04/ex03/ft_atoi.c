/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:48:12 by abenba            #+#    #+#             */
/*   Updated: 2024/07/07 15:28:04 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_ws(char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] < '0' || str[i] > '9'))
	{
		i++;
	}
	return (i);
}

int ft_sign(char *str)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	while (str[i] && (str[i] < '0' || str[i] > '9'))
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	return (sign);
}

int ft_atoi(char *str)
{
	int sign;
	int i;
	int result;

	i = ft_ws(str);
	sign = ft_sign(str);
	result = 0;

	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result *= 10; 
		result += str[i] - '0';
		i++;	
	}
	return (result * sign);
}
int main(int argc, char**argv)
{
	if (argc == 2)
	{
    	int num = ft_atoi(argv[1]);

    	printf("The integer value is: %d\n", num);
	}
    return 0;
}
