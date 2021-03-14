#include "holberton.h"

/* COMENTARIO DE LA FUNCION */
int print_character_special(const char c)
{
	int i, paso = 0;
	list_sc list[] = {
		{'a', '\a'},
		{'b', '\b'},
		{'f', '\f'},
		{'n', '\n'},
		{'r', '\r'},
		{'t', '\t'},
		{'v', '\v'},
		{'\0', '\0'},
	};

	for (i = 0; list[i].car != '\0'; i++)
	{
		if (list[i].car == c)
		{
			_putchar(list[i].fun_car);
			paso = 1;
			break;
		}
	}

	return (paso);
}
