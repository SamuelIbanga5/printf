#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

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

#endif /* _MAIN_H_ */
