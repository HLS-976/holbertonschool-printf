#include "main.h"

/**
 * print_character - prints element of type char
 *
 * @args: type structure
 *
 * Return: return 1 for the number of printed charcater
 */

int print_character(va_list args)
{
	_putchar((char)va_arg(args, int));

	return (1);
}

/**
 * print_integer - prints an integer
 *
 * @args: list of arguments
 *
 * Return: return the length of printed number
 */

int print_integer(va_list args)
{
	int number;
	int length = 0;
	int divisor = 1;

	number = va_arg(args, int);

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	if (number < 0)
	{
		_putchar('-');
		length++;
		number = -number;
	}

	while (number / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		_putchar((number / divisor) + '0');
		number %= divisor;
		divisor /= 10;
		length++;
	}

	return (length);

}
