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
	int i, c_imp = 0, paso = 1;
	ccar ret;

	if (format == NULL)
		return (0);

	va_start(ap, format);
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

	va_end(ap);
	return (c_imp);
}
