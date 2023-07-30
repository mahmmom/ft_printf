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
          Putchar('%')
            counter++;

      else if (format[counter] == 'c') 
      {
          int ch = va_arg(args, int)
          putchar(ch)
          counter++;
      }
      else if (format[counter] == 's')
      {
        int ch = va_arg(args, char*)
        putchar(*str)
        counter++;
      }
      else if (format[counter] == 'd')
      {
        int ch = va_arg(args, int)
        ft_atoi(*str)
        counter++;
      }
      else if (format[counter] == 'i')
      {
        int ch = va_arg(args, int)
        ft_atoi(*str)
        counter++;
      }
      
}



















