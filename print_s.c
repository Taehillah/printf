#include "main.h"
#include <stdio.h>
/**
 * print_s - A function that prints a string.
 * @s: The string to be printed.
 * Return: Always 1 for success.
 */
int print_s(va_list s)
{
char *chr = va_arg(s, char*);
int index = 0;
	if (chr == NULL)
	while (chr[index])
		_putchar(chr[index++]);
return (1);
}
