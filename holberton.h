#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct actions_special - actions_special
 * @car: character
 * @f: pointer
 * Description: actions_special
 */

typedef struct actions_special
{
	char car;
	int (*f)(char *, va_list);
} list_as;


/**
 * struct call_character_action_return - call_character_action_return
 * @salto: character
 * @suma: pointer
 * Description: call_character_action_return
 */

typedef struct call_character_action_return
{
	int salto;
	int suma;
} ccar;

int _putchar(char c);
int _printf(const char *format, ...);
ccar call_character_action(const char *format, const int i, va_list);
ccar call_ca2(const char *format, const int i, va_list ap, list_as as[]);
int callca3(const char *format, list_as as[], va_list ap, int i, int j, int r);
int callca4(const char *format, list_as as[], char *liA, int i, int j, int *r);

/* FINCTION FLAGS PROT */
int fun_print_c(char *flags, va_list);
int fun_print_s(char *flags, va_list);
int fun_print_i(char *flags, va_list);

#endif /* HOLBERTON_H */
