#include "ft_printf.h"

int ft_print_formats(va_list args, const char *format)
{
    int counter = 0;

    if (format[counter] == '%')
    {
        ft_putchar('%');
        counter++;
    }
    else if (format[counter] == 'c')
    {
        int ch = va_arg(args, int);
        ft_putchar(ch);
        counter++;
    }
    else if (format[counter] == 's')
    {
        char *str = va_arg(args, char*);
        while (*str)
            ft_putchar(*str++);
        counter++;
    }
    return (counter);
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


















