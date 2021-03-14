#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct actions_special{
	char car;
	int (*f)(char *, va_list);
} list_as;

typedef struct call_character_action_return{
	int salto;
	int suma;
} ccar;

int _putchar(char c);
int _printf(const char *format, ...);
ccar call_character_action(const char *format, const int i, va_list);


/* FINCTION FLAGS PROT */
int fun_print_c(char *flags, va_list);
int fun_print_s(char *flags, va_list);

#endif /* HOLBERTON_H */
