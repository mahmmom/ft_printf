#include "ft_printf.h"

int ft_print_num(int n)
{
    int count = 0;

    if (n == -2147483648)
    {
        count += write(1, "-2147483648", 11);
        return count;
    }
    else if (n < 0)
    {
        count += ft_putchar('-');
        n = -n;
    }
    if (n > 9)
    {
        count += ft_print_num(n / 10);
    }
    count += ft_putchar(n % 10 + '0');
    return count;
}
