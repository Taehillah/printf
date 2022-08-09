#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* struct print - The structure for different types
* of variables.
* @x: Variable type to be printed.
* @y: Function pointer to print that type.
*/
typedef struct print
{
char *x;
int (*y)(va_list);
}
print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
int print_p(va_list p);
int print_d(va_list d);
int print_x(va_list x);
int print_X(va_list X);
int print_o(va_list o);
int print_u(va_list u);
int print_r(va_list r);
int print_R(va_list R);
int print_b(va_list b);
int print_i(va_list i);
#endif
