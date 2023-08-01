#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_formats(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_printchar(va_arg(args, int));
	else if (format == 's')
		print_length += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		print_length += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_length += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_length += ft_printpercent();
	return (print_length);
}


int ft_printf(const char *format, ...)
{
    va_list args;
    int len = 0;

    va_start(args, format);
    while (format[len])
    {
        if (format[len] == '%')
        {
            len = len + ft_print_formats(args, format + len + 1);
            len++;
        }
        else
        {
            ft_putchar(format[len]);
            len++;
        }
    }
    va_end(args);
    return (len);
}


















