#include "main.h"

/**
 * print_c - prints element of type char
 * @args: type structure
 * Return: void
 */

int print_c(va_list args)
{
	int length = 0;
	char temporyVariable;

	temporyVariable = (char)va_arg(args, int);
	_putchar(temporyVariable);

	return (length++);
}

/**
 * print_d - prints element of type integer
 * @args: type structure
 * Return: void
 */

int print_d(va_list args)
{
	int number;
	int length = 0;
	char temporaryArray[100];
	int indexOfArray = 0;

	number = va_arg(args, int);

	if (number == 0)
	{
		_putchar('0');
		length++;
	}

	if (number < 0)
	{
		_putchar('-');
		length++;
		number = -number;
	}

	while (number >  0)
	{
		temporaryArray[indexOfArray++] = (number % 10) + '0';
		number /= 10;
	}

	while (indexOfArray >= 0)
	{
		_putchar(temporaryArray[indexOfArray]);
		indexOfArray--;
		length++;
	}

	return (length);

}
