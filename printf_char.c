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
 * print_r - prints string in reverse
 * @r: string
 *
 * Return: number bytes printed
 */
int print_r(va_list r)
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

/**
 * printf_R - Function that prints the rot13'ed string
 * @R: string
 * Return: Number of characters
 */
int printf_R(va_list R)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;
	int count;

	count = 0;
	str = va_arg(R, char *);
	if (str == NULL)
	{
		str = "(ahyy)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (str[i] == a[j])
			{
				_putchar(b[j]);
				count += 1;
				break;
			}
		}
		if (!a[j])
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
