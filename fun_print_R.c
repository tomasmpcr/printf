#include "holberton.h"
/**
* fun_print_R - function of rot13
* @ap: parametrs of numbers
* @flags: the flags
* ------------------------------------
* Return: return the characters
*/

int fun_print_R(__attribute__((unused)) char *flags, va_list ap)
{
	char m[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        char n[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
        int i, j;
        char *s;

        s = va_arg(ap, char*);
        if (!s)
                return (-1);
        for (i = 0; s[i] != 0; i++)
        {
                for (j = 0; m[j] != '\0'; j++)
                {
                        if (s[i] == m[j])
                        {
                                _putchar(n[j]);
                                break;
                        }
                }
                if (!m[j])
                        _putchar(s[i]);
        }
        return (_strlen(s));
}

int _strlen(char *s)
{
        int len = 0;

        while (*s != 0)
        {
                s++;
                len++;
        }
        return (len);
}

