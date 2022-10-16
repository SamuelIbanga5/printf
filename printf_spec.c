#include "main.h"
/**
 * printf_c - A function that prints characters
 * @c: list of the arguments
 *
 * Return: characters printed
 */
int printf_c(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}

/**
 * printf_s - A function that prints a string
 * @c: lists of the argument
 *
 * Return: characters printed
 */
int printf_s(va_list s)
{
	int i;
	char *str = va_arg(s, char *);

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

