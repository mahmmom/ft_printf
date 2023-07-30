#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
size_t  counter;

counter = 0;
while (format[counter])
{
  if (format[counter] == '%')
    format++;

while (format[counter])
{
  if (format[counter] == '%')
    format++;
      if (format[i] == '%")
          ft_Putchar('%')
            counter++;

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
      else
      {
        ft_strdup(*format);
        counter++;
      }
  foramt++;
}
va_end(args);
}
return counter;      
}



















