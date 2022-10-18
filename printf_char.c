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

	i = 0;
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * printf_r - prints string in reverse
 * @r: string
 *
 * Return: number bytes printed
 */
int printf_r(va_list r)
{

	int len, i = 0;
	char *str;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")llin(";
	while (str[i])
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		len++;
	}
	return (len);
}
