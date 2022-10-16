#include "main.h"
/**
 * check_specifiers - Function that checks the specifiers and maps to
 * the correct function.
 * @format: A character string.
 * Return: Integer.
 */
int (*check_specifiers)(const char *format)
{
	int i;

	print_specs ps[] = {
		{'c', printf_c},
		{'s', printf_s},
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
