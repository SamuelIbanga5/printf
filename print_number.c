#include "main.h"

/**
 * print_number - print a number
 * @args: the number to print
 */
void print_number(va_list args)
{
	int n;
	unsigned int num;

	n = va_arg(args, int);
	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
