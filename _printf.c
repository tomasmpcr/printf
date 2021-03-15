#include "holberton.h"

/**
* _printf - function of printf
* @format: characters to print
* ------------------------------------
* Return: return the number characters
*/
int _printf(const char *format, ...)
{
	va_list ap;
	int c_imp = 0;
	
	if (format == NULL)
	{
		return (-1);
	}

	va_start(ap, format);

	c_imp = _func(format, ap);
	if (c_imp < 0)
		return (-1);

	va_end(ap);
	return (c_imp);
}

/**
* _func - function of printf
* @format: characters to print
* @va_list: asd
* ------------------------------------
* Return: return the number characters
*/
int _func(const char *format, va_list ap)
{
	int c_imp = 0, paso = 0, i, num_por = 0;
	ccar ret;

	for (i = 0; format[i] != '\0'; i++)
	{
		paso = 1;
		/* review the % flags */
		if (format[i] == '%')
		{
			paso = 0;
			i++;

			if (format[i] != '%')
			{
				ret = call_character_action(format, i, ap);
				i = i + ret.salto;
				if (ret.suma < 0)
				{
					return (-1);
				}
				num_por++;
				c_imp = c_imp + ret.suma;
			}
			else
			{
				paso = 1;
			}
		}
		/* print the character if paso == 1 */
		if (paso)
		{
			c_imp++;
			_putchar(format[i]);
		}
	}

	return (c_imp);
}