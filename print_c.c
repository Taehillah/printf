#include "main.h"
#include <stdlib.h>
/**
 * print_c - a function that prints a character.
 * @c: Character to be printed.
 * Return: Always 1(Success).
 */
int print_c(va_list c)
{
char character = (char)va_arg(c, int);
_putchar(character);
return (1);
}
