#include "main.h"

/**
 * printf_d - print an integer in decimal form
 * @d: the number to print
 *
 * Return: number of char and digits printed
 */
int printf_d(va_list d)
{
	int a[10];
	int j, m, n, sum, count;

	n = va_arg(d, int);
	count = 0;
	m = 1000000000;
	a[0] = n / m;
	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}
	return (count);
}

/**
 * printf_i - prints an integer
 * @i: integer to print
 *
 * Return: number of chars and digits printed
 */
int printf_i(va_list i)
{
	int a[10];
	int j, m, n, sum, count;

	n = va_arg(i, int);
	count = 0;
	m = 1000000000;
	a[0] = n / m;
	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}
	return (count);
}

/**
 * printf_b - Function that converts unsigned int argument to
 * binary.
 * @b: Unsigned integer to convert.
 * Return: Number of digits.
 */
int printf_b(va_list b)
{
	int count, temp, i;
	char str[256];
	unsigned int digits, num;

	count = 0;
	i = 0;
	num = va_arg(b, unsigned int);
	while (num)
	{
		digits = num % 2;
		for (; i < count + 1; i += 1)
		{
			str[i] = (char)digits;
		}
		num = num / 2;
		count += 1;
	}
	temp = count - 1;
	for (; temp >= i; temp--)
	{
		_putchar(str[temp]);
	}
	return (count);
}
