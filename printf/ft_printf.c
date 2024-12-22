#include "ft_printf.h"

int check_format(char format, va_list args)
{
	int count;

	count = 0;
	if (format == '%')
		count += ft_putchar('%');
	else if (format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		count += ft_putnbr_u(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		if (format == 'x')
			count += ft_puthex(va_arg(args, unsigned int));
		else
			count += ft_puthex_upp(va_arg(args, unsigned int));
	else if (format == 'p')
		count += ft_putaddr(va_arg(args, unsigned long));
	else
		count = -1;
	return (count);
}

int ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			va_start(args, format);
			count += check_format(format[i], args);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	return (count);
}