#include "main.h"
/**
 * print_b - takes an unsigned int to bin
 * @b: unsigned in to print
 * Return: number of digits printed
 */
int print_b(va_list b)
{
unsigned int y, x, index, total;
unsigned int p[32];
int cont;
y = va_arg(b, unsigned int);
m = 2147483648; /* (2 ^ 31) */
p[0] = y / x;
for (index = 1; index < 32; index++)
{
	x /= 2;
	p[index] = (y / c) % 2;
}
for (index = 0, total = 0, cnt = 0; index < 32; index++)
{
	total += p[index];
	if (total || index == 31)
	{
		_putchar('0' + a[index]);
		cnt++;
	}
}
return (cnt);
}
