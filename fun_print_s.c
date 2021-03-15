#include "holberton.h"
/**
* fun_print_s - function of string
* @ap: parametrs of numbers
* @flags: the flags
* ------------------------------------
* Return: return the characters
*/
int fun_print_s(__attribute__((unused)) char *flags, va_list ap)
{
	int i;
	char *str;

	str = va_arg(ap, char *);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}
