#include "main.h"

/**
 * print_character - Prints charcater corresponding to a specifier c
 *
 * @args: List structure containing arguments
 *
 * Return: return 1 for the printed charcater
 */

int print_character(va_list args)
{
	_putchar((char)va_arg(args, int));

	return (1);
}

/**
 * print_integer - prints an integer that can be a number or a digit
 *
 * @args: List structure containing arguments
 *
 * Return: return the length of the printed number
 */

int print_integer(va_list args)
{
	/*Declarating variables */
	int number;
	int length;
	int divisor;

	/* Initializing variables */
	number = va_arg(args, int); /* number takes the argument of type integer */
	length = 0;
	divisor = 1; /* divisor takes the value 1 because dividing by zero is not possible */

	if (number == 0)
	{ /* Prints '0' chracter if number is equal to zero and returns 1 to count the printed character */
		_putchar('0');
		return (1);
	}

	if (number < 0)
	{ /* Prints minus sign for negative numbers, increments length and sets positive number */
		_putchar('-');
		length++;
		number *= -1;
	}

	/* Sets divisor for number base 10, 100, etc... */
	while (number / divisor >= 10)
	{
		divisor *= 10;
	}
	
	while (divisor > 0)
	{ /* Displays each digit one by one as characters until the number can't be divided anymore */
		_putchar((number / divisor) + '0');
		number = number % divisor;
		divisor /= 10;
		length++;
	}

	/* Returns the length of printed characters */
	return (length);

}
