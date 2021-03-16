#include "holberton.h"

/**
 * print_number - loco..
 *@n: num
 *
 * Return: void.
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;

	if ((num / 10) != 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}

/**
* fun_print_i -function of integer
* @ap: parametrs of numbers
* @flags: the flags
* ------------------------------------
* Return: return the characters
*/

int fun_print_i(__attribute__((unused)) char *flags, va_list ap)
{
	int n, len = 0, div = 1, i;
	n = va_arg(ap, int);

	print_number(n);

	if (n < 0)
	{
		n = n * -1;
		len++;
	}

	for (i = 0; (n / div) > 10; i++)
	{
		div = div * 10;
	}
	len += i + 1;

	return (len);
}
