#include "main.h"
/**
 * print_o - prints the octal notation for ui
 * @o: the interger who's octal will be prented.
 *
 * Return: Number of printed digits.
 */
int print_o(va_list o)
{
unsigned int p[11];
unsigned int index = 1, x = 1073741824, y, total = 0;
int cnt;
y = va_arg(o, unsigned int);
p[0] = y / x;
for (; index < 11; index++)
{
x /= 8;
p[index] = (y / x) % 8;
}
for (index = 0, cnt = 0; index < 11; index++)
{
total += p[index];
if (total || index == 10)
{
_putchar('0' + p[index]);
cnt++;
}
}
return (cnt);
}
