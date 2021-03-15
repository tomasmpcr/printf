#include "holberton.h"
/**
* fun_print_c -function of character
* @ap: parametrs of numbers
* @flags: the flags
* ------------------------------------
* Return: return the characters
*/

int fun_print_c(__attribute__((unused)) char *flags, va_list ap)
{
	char c;

	c = va_arg(ap, int);
	if (c == '\0')
		return (0);

	_putchar(c);

	return (1);
}
