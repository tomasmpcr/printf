#include "holberton.h"

/* COMENTARIO DE LA FUNCION */
int _printf(const char *format, ...)
{
	int i, paso = 1;

	for (i = 0; format[i] != '\0'; i++)
	{
		paso = 1;

		if (format[i] == '\\' && format[i + 1] != '\0')
		{
			if (print_character_special(format[i + 1]))
			{
				i = i + 2;
				paso = 0;
			}
		}

		if (paso)
		{
			_putchar(format[i]);
		}
	}

	return (i);
}

