#include "holberton.h"

/**
* fun_print_i -function of integer
* @ap: parametrs of numbers
* @flags: the flags
* ------------------------------------
* Return: return the characters
*/
int fun_print_i(__attribute__((unused)) char *flags, va_list ap) {
	int i, len = 0, div = 1;
	unsigned int num;
	i = va_arg(ap, int);
	if (i < 0)
	{
		num = i * -1;
		_putchar('-');
		len++;
	}
	else
		num = i;
	for (i = 0; (num / div) > 9; i++)
	{
		div = div * 10;
	}

	for (; i < 0; i--)
	{
		_putchar(((num / div) % 10) + '0');
		div = div / 10;
		len++;
	}
	return (len);
}
