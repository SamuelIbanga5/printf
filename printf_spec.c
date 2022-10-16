#include "main.h"
/**
 * printf_c - A function that prints characters
 * @format: format of the arguments
 *
 * Return: Amount of characters printed
 */
int printf_c(va_list format)
{
	_putchar(va_arg(format, int));
	return (1);
}
