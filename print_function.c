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
	char character = va_arg(args, int);

	if (character == '\0')
		return (0);

	_putchar(character);

	return (1);
}

/**
 * print_string - prints several characters to form a string
 *
 * @args: list of arguments
 *
 * Return: the length of the printed characters
 */

int print_string(va_list args)
{
	char *string = va_arg(args, char *);
	int length = 0;

	if (!string)
	{
		string = "(null)";
	}

	while (string[length] != '\0')
	{
		_putchar(string[length]);
		length++;
	}

	return (length);
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
	/*Declaring variables */
	long int number;
	int length;
	int divisor;

	/* Initializing variables */
	number = va_arg(args, int); /* number takes the argument of type integer */
	length = 0;
	/* divisor takes the value 1 because dividing by zero is not possible */
	divisor = 1;
	/* Prints '0' chracter if number is equal to zero and returns 1 to count it*/
	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	/* Prints '-' for negative numbers, increments length, sets positive number*/
	if (number < 0)
	{
		_putchar('-');
		length++;
		number *= -1;
	}
	/* Sets divisor for number base 10, 100, etc... */
	while (number / divisor >= 10)
	{
		divisor *= 10;
	}
	/* Prints each digit as characters until the number can't be divided anymore*/
	while (divisor > 0)
	{
		_putchar((number / divisor) + '0');
		number = number % divisor;
		divisor /= 10;
		length++;
	}
	/* Returns the length of printed characters */
	return (length);
}
