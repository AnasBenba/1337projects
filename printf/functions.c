#include "ft_printf.h"

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int ft_putstr(char *s)
{
	int count;

	count = 0;
	while (s[count])
		count++;
	write(1, s, count);
	return (count);
}


int	ft_putnbr(int n)
{
	char	c;
	static int		count;

	if (n == -2147483648)
	{
		count += ft_putstr("-2147483648");
	}
	else if (n < 0)
	{
		count += ft_putchar('-');
		n *= -1;
		ft_putnbr(n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		c = n + '0';
		count += ft_putchar(c);
	}
	return (count);
}

int	ft_putnbr_u(unsigned int n)
{
	char				c;
	static unsigned int	count;

	if (n < 0)
	{
		count += ft_putchar('-');
		n *= -1;
		ft_putnbr_u(n);
	}
	else if (n > 9)
	{
		ft_putnbr_u(n / 10);
		ft_putnbr_u(n % 10);
	}
	else
	{
		c = n + '0';
		count += ft_putchar(c);
	}
	return (count);
}

int ft_puthex(unsigned int c)
{
	char *hex = "0123456789abcdef";
	static int count = 0;
	static int flag = 0;
	int i = 0;

	if (c == 0)
	{
		if (flag == 0)
			count += ft_putchar(hex[i]);
		return (count);
	}
	else
	{
		flag = 1;
		ft_puthex(c / 16);
		i = c % 16;
		count += ft_putchar(hex[i]);
	}
	return (count);
}