#include "main.h"
#include <stdlib.h>
/**
* print_r - a function to print
*in reverse.
* @reverser: string to print
* Return: number of chars printed
*/
int print_R(va_list R)
{
char *chr;
int index, cnt = 0;
chr = va_arg(R, char *);
if (chr == NULL)
chr = ")llun(";
for (index = 0; chr[index]; index++)
;
for (index -= 1; index >= 0; index--)
{
_putchar(chr[index]);
cnt++;
}
return (cnt);
}
