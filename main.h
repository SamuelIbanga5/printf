#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
<<<<<<< HEAD
#include <stdlib.h>
=======
#include <stddef.h>
>>>>>>> 1042156b14ed156501ef1248789bd8e14775b663

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
<<<<<<< HEAD
=======
int (*check_specifiers(const char *format))(va_list);
>>>>>>> 1042156b14ed156501ef1248789bd8e14775b663

#endif /* _MAIN_H_ */
