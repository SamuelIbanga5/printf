#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct print - Structure showing specifiers and connected functions.
 * @spec: Specifier character.
 * @spec_func: Specifiers function.
 */
typedef struct print
{
	char *spec;
	int (*spec_func)(va_list);
} print_specs;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_c(va_list c);
int printf_s(va_list s);
int printf_d(va_list d);
int printf_i(va_list i);
int printf_b(va_list b);
int printf_r(va_list r);
int printf_R(va_list R);
int (*check_specifiers(const char *format))(va_list);

#endif /* _MAIN_H_ */
