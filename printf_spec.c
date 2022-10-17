#include "main.h"
/**
 * printf_c - A function that prints characters
 * @c: list of the arguments
 *
 * Return: number of characters printed
 */
int printf_c(va_list c)
{
	int count = 0;
	char ch = (char)va_arg(c, int);

	count += 1;
	_putchar(ch);
	return (1);
}

/**
 * printf_s - A function that prints a string
 * @s: lists of the argument
 *
 * Return: number of characters printed
 */
int printf_s(va_list s)
{
	int i;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}

