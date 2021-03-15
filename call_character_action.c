#include "holberton.h"

/* COMENTARIO DE LA FUNCION */
ccar call_character_action(const char *format, const int i, va_list ap)
{
	int j, r, t, paso = 0;
	char *flags;

	ccar ret = {0, 0};

	list_as as[] = {
		{'c', fun_print_c},
		{'s', fun_print_s},
		{'i', fun_print_i},
		{'d', fun_print_d}
		{'\0', NULL}
	};

	for (j = 0; format[i + j] != '\0'; j++)
	{
		for (r = 0; as[r].car != '\0'; r++)
		{
			if (format[i + j] == as[r].car)
			{
				paso = 1;
				break;
			}
		}
		if (paso)
			break;
	}

	if (paso)
	{
		flags = malloc((j + 2) * sizeof(char));

		if (flags == NULL)
			return (ret);

		for (t = 0; t < j; t++)
			flags[t] = format[i + t];
		flags[t] = '\0';

		ret.suma = as[r].f(flags, ap);
		free(flags);
	}
	else
		j = 0;

	ret.salto = j;

	return (ret);
}
