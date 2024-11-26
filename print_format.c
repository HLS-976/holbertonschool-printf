#include "main.h"

/**
 * print_c - prints element of type char
 * @args: type structure
 * Return: void
 */

void print_c(va_list args)
{
	char temporyVariable;

	temporyVariable = (char)va_arg(args, int);
	_putchar(temporyVariable);
}
