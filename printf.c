#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insp_format - Function that inspects if there is a format specifier.
 * @format: specifies a valid specifier.
 * Return: return a pointer to a function.
 * Or return: NULL if the function points to nothing.
 */
int (*insp_format(const char *format))(va_list) {
int index = 0;
print_t p[] = {
{"c", print_c},
{"s", print_s},
{"i", print_i},
{"d", print_d},
{"o", print_o},
{"u", print_u},
{"p", print_p},
{"r", print_r},
{"R", print_R},
{"x", print_x},
{"X", print_X},
{"b", print_b},
{NULL, NULL}
};
for (index = 0; p[index].x != NULL; index++)
{
if (*(p[index].x) == *format)
break;
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
while (format && format[i])
{
if (format[i] != '%')
{
_putchar(format[i]);
cnt++;
i++;
continue;
}
else
{
if (format[i + 1] == '%')
{
_putchar('%');
cnt++;
i += 2;
continue;
}
else
{
y = insp_format(&format[i + 1]);
if (y == NULL)
return (-1);
i += 2;
cnt += y(sb);
continue;
}
}
i++;
}
va_end(sb);
return (cnt);
}
