#include "main.h"
/**
 * check_specifiers - Function that checks the specifiers and maps to
 * the correct function.
 * @format: A character string.
 * Return: Integer.
 */
int (*check_specifiers(const char *format))(va_list)
{
	unsigned int i;

	print_specs ps[] = {
		{"c", printf_c},
		{"s", printf_s},
		{"d", printf_d},
		{"i", printf_i},
		{"b", printf_b},
		{"r", printf_r},
		{"R", printf_R},
		{NULL, NULL}
	};
	for (i = 0; ps[i].spec != NULL; i++)
	{
		if (*(ps[i].spec) == *format)
		{
			break;
		}
	}
	return (ps[i].spec_func);
}
