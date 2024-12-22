#include "ft_printf.h"

int ft_puthex_upp(unsigned int c)
{
	char *hex = "0123456789ABCDEF";
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
		ft_puthex_upp(c / 16);
		i = c % 16;
		count += ft_putchar(hex[i]);
	}
	return (count);
}

int ft_putaddr(unsigned long c)
{
	int count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_puthex(c);
	return (count);
}