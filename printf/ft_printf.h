/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 22:35:20 by abenba            #+#    #+#             */
/*   Updated: 2024/12/23 22:35:22 by abenba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int     ft_printf(const char *format, ...);
int     *ft_putchar(char c, int *count);
int     *ft_putstr(char *s, int *count);
int     *ft_putnbr(int n, int *count);
int     *ft_putnbr_u(unsigned int n, int *count);
int     *ft_puthex(unsigned int c, int *count, int flag);
int     *ft_puthex_upp(unsigned int c, int *count, int flag);
int     *ft_putaddr(unsigned long c, int *count, int flag);

#endif