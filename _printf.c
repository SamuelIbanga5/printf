#include "main.h"
/**
 * printf - Function that produces output according to a format.
 * @format: A character string.
 * @...: Values to be substituted.
 * Return: Number of characters printed.
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
	return (ps[i].func);
}
