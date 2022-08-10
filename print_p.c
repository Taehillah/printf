#include "main.h"
#include <stdlib.h>
/**
 * print_p - a function that print address.
 * @p: Addresses that must be printed.
 * Return: The number of adresses printed.
 */
int print_p(va_list p)
{
int cnt = 0;
unsigned int q[16];
unsigned int index = 0, total = 0;
unsigned long y, x = 1152921504606846976;
char *chr = "(nil)";
y = va_arg(p, unsigned int);
if (y == 0)
{
for (; chr[index]; index++)
{
_putchar(chr[index]);
cnt++;
}
return (cnt);
}
_putchar('0');
_putchar('x');
cnt = 2;
q[0] = y / x;
for (index = 0; index < 16; index++)
{
	x /= 16;
	q[index] = (y / x) % 16;
}
for (index = 0; index < 16; index++)
{
	total += q[index];
	if (total || index == 15)
	{
		if (q[index] < 10)
		_putchar('0' + q[index]);
		else
		_putchar('0' + ('a' - ':') + q[index]);
		cnt++;
	}
}
return (cnt);
}
