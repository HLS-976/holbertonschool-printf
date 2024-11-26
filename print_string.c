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
	/* Initialisation of a listing structure */

	int length = 0;

	while (*string)
	{
		/*
		 * Prints the pointer of our string, as long as it exists
		 * And increment the string and it's length
		 */
		_putchar(*string);
		length++;
		string++;
	}

	return (length);
}
