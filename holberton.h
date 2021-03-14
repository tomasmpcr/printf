#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

typedef struct special_character{
	char car;
	char fun_car;
} list_sc;

typedef struct actions_special{
	char car;
	void (*f)(va_list);
} list_as;

int _putchar(char c);
int _printf(const char *format, ...);
int print_character_special(const char);

#endif /* HOLBERTON_H */
