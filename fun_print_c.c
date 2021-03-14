#include "holberton.h"

/* COMENTARIO DE LA FUNCION */
int fun_print_c(__attribute__((unused)) char *flags, va_list ap)
{
	char c;

	c = va_arg(ap, int);
	_putchar(c);

	return (1);
}
