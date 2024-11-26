#include "main.h"

/**
 * print_s - prints element of type string
 * @args: type structure
 * Return: void
 */

void print_s(va_list args)
{
	constant char *s;

	va_start(args, s);

	while (s)
	{
		putchar(s);
		s = va_arg(args, constant char *);
	}
	va_end(args);
}
