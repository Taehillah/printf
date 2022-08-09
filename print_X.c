#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_x - prints character ascii code
 * for character in lovercase hexadecimal.
 * @x: character to be printed.
 * Return: Number of printed characters.
 */
int print_X(va_list X)
{
unsigned int p[8];
unsigned int index = 1, y = 268435456, z, total = 0;
char sep;
int cnt = 0;
z = va_arg(X, unsigned int);
sep = 'a' - ':';
p[0] = z / y;
for (; index < 8; index++)
{
y /= 16;
p[index] = (z / y) % 16;
}
for (index = 0, cnt = 0; index < 8; index++)
{
total += p[index];
if (total || index == 7)
{
if (p[index] < 10)
_putchar('0' + p[index]);
else
_putchar('0' + sep + p[index]);
cnt++;
}
}
return (cnt);
}
