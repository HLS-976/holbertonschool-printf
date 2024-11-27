#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct specifier - structure of specifer
 * @specifier: character specifier
 * @f: function of specifier
 */
typedef struct Specifier
{
	char specifier;
	int (*f)(va_list);
}Specifier_t;

/*prototype*/
int print_c(va_list args);
int print_d(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);
#endif
