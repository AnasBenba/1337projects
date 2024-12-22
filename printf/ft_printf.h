#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int ft_printf(const char *format, ...);
int ft_putchar(char c);
int ft_putstr(char *s);
int ft_putnbr(int n);
int ft_putnbr_u(unsigned int n);
int ft_puthex(unsigned int c);
int ft_puthex_upp(unsigned int c);
int ft_putaddr(unsigned long c);

#endif