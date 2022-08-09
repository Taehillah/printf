#include "main.h"
#include <stdio.h>
/**
* print_d - prints the interges with a base 10.
* @i: intergers to be printed.
* Return: number of printed interged.
*/
int print_d(va_list i)
{
int p[10];
int index = 1, x = 1000000000, y, total = 0, cnt = 0;
y = va_arg(i, int);
if (y < 0)
{
y *= -1;
_putchar('-');
cnt++;
}
p[0] = y / x;
for (; index < 10; index++)
{
x /= 10;
p[index] = (y / x) % 10;
}
for (index = 0; index < 10; index++)
{
total += p[index];
if (total != 0 || index == 9)
{
_putchar('0' + p[index]);
cnt++;
}
}
return (cnt);
}
