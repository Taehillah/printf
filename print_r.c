#include "main.h"
/**
* print_r - a function to print
* in reverse.
* @reverser: string to print
* Return: number of chars printed
*/
int print_r(va_list r)
{
char *chr;
int index, cnt = 0;
chr = va_arg(r, char *);
if (chr == NULL)
	chr = ")llun(";
for (index = 0; chr[index]; index++)
for (index -= 1; index >= 0; index--)
{
	_putchar(chr[index]);
	cnt++;
}
return (cnt);
}
