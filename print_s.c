#include "main.h"

/**
 * print_s - prints element of type string
 * @args: type structure
 * Return: void
 */

void print_s(va_list args)
{
	constant char *str;

	va_start(args, str);

	while (str)
	{
		putchar(str);
		str = va_arg(args, constant char *);
	}
	va_end(args);
}
