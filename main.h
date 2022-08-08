#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct print - The structure for different types
 * of variables.
 * @x: Variable type to be printed.
 * @y: Function pointer to print that type.
 */
typedef struct print {
  char *x;
  int (*y)(va_list);
} print_t;
int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
#endif
