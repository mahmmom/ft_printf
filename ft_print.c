#include "ft_printf.h"

int	ft_print_formats (va_list args, const char format)
{
int  counter;

counter = 0;
if (format[i] == '%")
{
  ft_Putchar('%')
    counter++;
}
else if (format[counter] == 'c') 
{
  int ch = va_arg(args, int)
  ft_putchar(ch)
  counter++;
}
else if (format[counter] == 's')
{
  int ch = va_arg(args, char*)
  ft_strdup(*str)
  counter++;
}
  return (counter);
}


int ft_printf(const char *format, ...)
{
  int  len;

  len = 0;
  while (format[len])
  {
    if (format[len] == '%')
  {
    len = len + ft_print_formats(args, str[len + 1]);
    len++;
  }
    else
  {
    ft_strdup(*format);
    counter++;
  }
  len++;
  }
  va_end(args);
  return (len);      
}

int main()
{
  char *str = "Mohamed";

  ft_printf()
}

















