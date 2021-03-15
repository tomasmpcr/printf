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
	int j = 0, r, paso = 0, res = 0;
	char *lisA = "-0+ #";

	ccar ret = {0, 0};

	paso = callc4(format, as, lisA, i, &j, &r);
	if (paso == 1)
	{
		res = callca3(format, as, ap, i, j, r);
		if (res < 0)
			ret.suma = 1;
		else
			ret.suma = res;
	}
	else if (paso == 2)
	{
		ret.suma = -1;
	}
	else if (paso == 0)
	{
		ret.suma = 1;
		_putchar('%');
		j = -1;
	}
	ret.salto = j;
	return (ret);
}

/**
* callca3 - call other functions
* @format: string to process
* @as: list of other functions
* @ap: list of paramtros
* @i: the posicion in the string
* @j: the posicion in the string
* @r: the posicion in the string
* ------------------------------------
* Return: return the characters
*/
int callca3(const char *format, list_as as[], va_list ap, int i, int j, int r)
{
	int t, ret = 0;
	char *flags;

	flags = malloc((j + 2) * sizeof(char));
	if (flags == NULL)
		return (1);
	for (t = 0; t < j; t++)
		flags[t] = format[i + t];
	flags[t] = '\0';
	ret = as[r].f(flags, ap);

	free(flags);
	return (ret);
}

/**
* callc4 - call other functions
* @format: string to process
* @as: list of other functions
* @liA: list of paramtros
* @i: the posicion in the string
* @j: the posicion in the string
* @r: the posicion in the string
* ------------------------------------
* Return: return the characters
*/
int callc4(const char *format, list_as as[], char *liA, int i, int *j, int *r)
{
	int paso = 0, paso2 = 0, t;

	for (*j = 0; format[i + *j] != '\0'; *j = *j + 1)
	{
		paso2 = 0;
		for (*r = 0; as[*r].car != '\0'; *r = *r + 1)
		{
			if (format[i + *j] == as[*r].car)
			{
				paso = 1;
				break;
			}
		}
		if (paso != 0)
			break;
		for (t = 0; liA[t] != '\0'; t++)
		{
			if (format[i + *j] == liA[t])
				paso2 = 1;
		}
		if (paso2 == 0)
		{
			paso = 0;
			break;
		}
		if (paso != 0)
			break;
	}

	if (paso == 0 && format[i + *j] == '\0')
		paso = 2;

	return (paso);
}
