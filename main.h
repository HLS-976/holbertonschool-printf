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
	void (*f)(va_list);
}Specifier_t;

/*prototype*/
void print_c(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);
#endif
