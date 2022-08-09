#include "main.h"
#include <stdlib.h>
/**
 * print_u - Prints unsigned intergers.
 * @u: unsigned interger to be printed.
 * Return: Number of printed intergers.
 */
int print_u(va_list u)
{
unsigned int p[10];
unsigned int index = 1, x = 1000000000, y, total = 0;
int cnt = 0;
y = va_arg(u, unsigned int);
p[0] = y / x;
for (; index < 10; index++)
{
x /= 10;
p[index] = (y / x) % 10;
}
for (index = 0; index < 10; index++)
{
total += p[index];
if (total || index == 9)
{
_putchar('0' + p[index]);
cnt++;
}
}
return (cnt);
}
