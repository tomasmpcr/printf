#include "holberton.h"
/**
* fun_print_r - print reverse string
* @ap: parametrs of numbers
* @flags: the flags
* ------------------------------------
* Return: return the characters
*/

int fun_print_r(__attribute__((unused)) char *flags, va_list ap)
{
	int i, j;
	char *s;

	s = va_arg(ap, char*);

	if (!s)
		return (-1);

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	return (i);
}

