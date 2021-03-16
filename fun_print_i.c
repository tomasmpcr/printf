#include "holberton.h"

/**
* fun_print_i -function of integer
* @ap: parametrs of numbers
* @flags: the flags
* ------------------------------------
* Return: return the characters
*/

int fun_print_i(__attribute__((unused)) char *flags, va_list ap)
{
	int i, len, num, neg = 0, div = 1;

	num = va_arg(ap, int);

	if (num < 0)
	{
		neg = 1;
		num = num * -1;
		_putchar('-');
	}

	for (i = 0; (num / div) > 10; i++)
	{
		div = div * 10;
	}
	len = i + 1;

	for (; (i + 1) > 0; i--)
	{
		_putchar(((num / div) % 10) + '0');
		div = div / 10;
	}

	return (len + neg);
}
