#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print - Structure showing specifiers and connected functions.
 * @spec: Specifier character.
 * @spec_func: Specifiers function.
 */
typedef struct print
{
	char *spec;
	void (*spec_func)(va_list);
} print_specs;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_c(va_list c);
int printf_s(va_list s);
int printf_d(va_list d);

#endif /* _MAIN_H_ */
