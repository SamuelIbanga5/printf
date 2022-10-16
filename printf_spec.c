#include "main.h"
/**
 * printf_c - A function that prints characters
 * @c: list of the arguments
 *
 * Return: number of characters printed
 */
int printf_c(va_list c)
{
	char ch = (char)va_arg(c, int);
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

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (1);
}

