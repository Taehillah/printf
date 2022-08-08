#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct print - The structure for defferent types
 * of variables.
 * @x: Vriable type to be printed.
 * @y: Function pointer to print that type.
 */
typedef struct print
{
char *x;
int (*y)(va_list);
}
print_t;
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list c);
#endif
