#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
while (*format)
{
  if (*format == '%')
    format++;

while (*format)
{
  if (*format == '%')
    format++;
      if (*format == '%"){
          Putchar('%')
            counter++;
}
   else if (*format == 'c') //if after % is c
      {
          int ch = va_arg(args, int) //Open variable to store the args from the list
          putchar(ch) //print it
          counter++; //increase our counter
      }
  
  
}
