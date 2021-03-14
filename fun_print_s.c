#include "holberton.h"

/* COMENTARIOS DE LA FUNCION */
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
