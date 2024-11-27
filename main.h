#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct Specifier - structure of specifer
 *
 * @specifier: character specifier
 * @f: function of specifier
 */
typedef struct Specifier
{
	char specifier;
	int (*f)(va_list);
} Specifier_t;

/*prototype*/
int print_character(va_list args);
int print_integer(va_list args);
int print_string(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);
#endif
