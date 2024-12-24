/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:35:40 by abenba            #+#    #+#             */
/*   Updated: 2024/12/23 22:35:42 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int     *ft_putchar(char c, int *count)
{
        write(1, &c, 1);
        *count += 1;
        return (count);
}

int     *ft_putstr(char *s, int *count)
{
        int     i;

        i = 0;
        if (!s)
                s = "(null)";
        while (s[i])
                i++;
        write(1, s, i);
        *count += i;
        return (count);
}

int     *ft_putnbr(int n, int *count)
{
        char    c;

        if (n == -2147483648)
        {
                ft_putstr("-2147483648", count);
        }
        else if (n < 0)
        {
                ft_putchar('-', count);
                n *= -1;
                ft_putnbr(n, count);
        }
        else if (n > 9)
        {
                ft_putnbr(n / 10, count);
                ft_putnbr(n % 10, count);
        }
        else
        {
                c = n + '0';
                ft_putchar(c, count);
        }
        return (count);
}

int     *ft_putnbr_u(unsigned int n, int *count)
{
        char    c;

        if (n > 9)
        {
                ft_putnbr_u(n / 10, count);
                ft_putnbr_u(n % 10, count);
        }
        else
        {
                c = n + '0';
                ft_putchar(c, count);
        }
        return (count);
}

int     *ft_puthex(unsigned int c, int *count, int flag)
{
        char    *hex;
        int             i;

        hex = "0123456789abcdef";
        i = 0;
        if (c == 0 && flag != 0)
                return (0);
        else if (c == 0 && flag == 0)
        {
                ft_putchar('0', count);
                return (count);
        }
        else
        {
                flag = 1;
                ft_puthex(c / 16, count, flag);
                i = c % 16;
                ft_putchar(hex[i], count);
        }
        return (count);
}