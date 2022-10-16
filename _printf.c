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

/**
 * _printf - Function that produces output according to a format.
 * @format: A character string.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	unsigned int i, count = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
	{
		return (-1);
	}
	va_start(valist, format);
	while (format[i])
	{
		for (i = 0; format[i] && format[i] != '%'; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
		{
			return (count);
		}
		f = check_specifiers(&format[i + 1]);
		if (f != NULL)
		{
			count += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
		{
			return (-1);
		}
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
		{
			i += 2;
		}
		else
		{
			i++;
		}
	}
	va_end(valist);
	return (count);
}
