#include "holberton.h"

/**
* call_character_action - list of other functions
* @format: string to process
* @i: the posicion in the string
* @ap: list of paramtros
* ------------------------------------
* Return: return the characters
*/

ccar call_character_action(const char *format, const int i, va_list ap)
{
	ccar ret;
	list_as as[] = {
		{'c', fun_print_c},
		{'s', fun_print_s},
		{'i', fun_print_i},
		{'d', fun_print_i},
		{'\0', NULL}
	};

	ret = call_ca2(format, i, ap, as);

	return (ret);
}


/**
* call_ca2 - call other functions
* @format: string to process
* @i: the posicion in the string
* @ap: list of paramtros
* @as: list of other functions
* ------------------------------------
* Return: return the characters
*/
ccar call_ca2(const char *format, const int i, va_list ap, list_as as[])
{
	int j, r, t, paso = 0;
	char *flags;

	ccar ret = {0, 0};

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
		if (ret.suma < 0)
			ret.suma = 1;
		free(flags);
	}
	else
	{
		ret.suma = 1;
		_putchar('%');
		j = -1;
	}
	ret.salto = j;
	return (ret);
}
