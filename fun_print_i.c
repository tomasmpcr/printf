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
	int aux, i, len, num;
	char *listNuambers;

	num = va_arg(ap, int);
	aux = num;

	for (i = 0; aux != 0 ; i++)
	{
		aux = aux / 10;
	}

	len = i;
	listNuambers = malloc((i + 1) * sizeof(char));

	if (listNuambers == NULL)
	{
		return (-1);
	}

	aux = num;

	for (i = 0 ; aux != 0 ; i++)
	{
		listNuambers[i] = (aux % 10) + 48;
		aux = aux / 10;
	}
	listNuambers[i] = '\0';


	for (i = (len - 1) ; i >= 0 ; i--)
	{
		_putchar(listNuambers[i]);
	}


	return (len);
}
