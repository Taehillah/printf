#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * insp_format - Function that inspects if there is a format specifier.
 * @format: specifies a valid specifier.
 * Return: return a pointer to a function.
 * Or return: NULL if the function points to nothing.
 */
static int (*insp_format(const char *format))(va_list)
{
unsigned int index;
print_t p[] = {
  {"c", print_c},
  {"s", print_s},
  {NULL, NULL}
  };
for (index = 0; p[index].x != NULL; index++)
{
  if (*(p[index].x) == *format){
    break;
  }
    
}
return (p[index].y);
}
/**
 * _printf - Prints functions based on thier formats.
 * @format: Arguments passed to insp_format.
 * Return: Number of characters to be printed.
 */
int _printf(const char *format, ...)
{
va_list sb;
int (*y)(va_list);
unsigned int i = 0, cnt = 0;
  if (format == NULL)
    return (-1);
va_start(sb, format);
  while(format[i])
  {
      for (;format[i] !='%' && format[i]; i++)
      {
        _putchar( format[i]);
        cnt++;
      }
      
      if (format[i])
        return(cnt);
    y = insp_format(&format[i + 1]);
    if (y != NULL)
    {
        cnt += y(sb);
        i+=2;
        continue;
    }
    
      if (!format[i + 1])
      {
      return (-1);
      _putchar(format[i]);
        cnt++;
        if(format[i+1] == '%')
        {i+=2;}
        else
        {i++;} 
      }
  }
  va_end(sb);
  return (cnt);
}
