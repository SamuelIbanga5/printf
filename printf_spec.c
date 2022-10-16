#include "main.h"
/**
 * printf_c - A function that prints characters
 * @c: format of the arguments
 *
 * Return: Amount of characters printed
 */
int printf_c(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}
