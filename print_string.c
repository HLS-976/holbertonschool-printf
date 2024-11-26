#include "main.h"

/**
 * print_string - prints several chracter to form a string
 *
 * @args: list of arguments
 *
 * Return: the length of printed charecter
 */

int print_string(va_list args)
{
	char *string = va_arg(args, char *);
	int length = 0;

	while (*string)
	{
		_putchar(*string);
		length++;
		string++;
	}

	return (length);
}
