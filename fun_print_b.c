#include "holberton.h"
/**
* fun_print_b -function of character
* @ap: parametrs of numbers
* @flags: the flags
* ------------------------------------
* Return: return the characters
*/

int fun_print_b(__attribute__((unused)) char *flags, va_list ap)
{
	int numB10 = 0, numB2 = 1, len = 0, i;
	numB10 = va_arg(ap, unsigned int);

	if(numB10 <= 0)
	{
		_putchar('0');
		return (1);
	}

	for (; numB10 != 0;)
	{
		numB2 = numB2 * 10;
		if (numB10 % 2 == 1)
			numB2 = numB2 + 1;
		numB10 = numB10 / 2;
		len++;
	}

	for (i = len; i > 0; i--)
	{
		_putchar((numB2 % 10) + '0');
		numB2 = numB2 / 10;
	}

	return (len);
}
