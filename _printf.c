#include "main.h"

/* Prototype of get_specifier function */
int get_specifier(
		const char *format,
		int *indexFormat,
		int *lengthFormat,
		va_list arguments);

/**
 * _printf - Variadic function that prints formated variables at the output
 *
 * @format: A string in which the user defines a specifier
 *
 * Return: length of the printed string
 */

int _printf(const char *format, ...)
{
	/* Declarating variables */
	int indexFormat, lengthFormat, notFound;
	va_list arguments;

	if (!format) /* Check whether or not format exist */
		return (-1);

	/* Initializing variables */
	va_start(arguments, format);
	indexFormat = 0;
	lengthFormat = 0;

	while (format[indexFormat] != '\0')
	{
		/**
		 * Prints the current character if it's different
		 * than % charcaterand increment the lengthFormat
		 */
		if (format[indexFormat] != '%')
		{
			_putchar(format[indexFormat]);
			lengthFormat++;
		}
		else
		{ /**
		   * Calls the get_specifier function that
		   * calls in turn the function corresponding to a specifier
		   */
			notFound = get_specifier(format, &indexFormat, &lengthFormat, arguments);

			if (notFound == 0)
			{ /* Prints specifier as is it */
				_putchar('%');
				_putchar(format[indexFormat]);
				lengthFormat += 2;
			}

		}
		indexFormat++;
	}
	va_end(arguments); /* Ends the use of the list of arguments*/
	_putchar('\n');
	return (lengthFormat);
}

/**
 * get_specifier - prints the resultat of specifier and return the size
 *
 * @format: string
 * @indexFormat: index of current format
 * @lengthFormat: size of current format
 * @arguments: variadics arguments
 *
 * Return: 0
 */

int get_specifier(const char *format, int *indexFormat, int *lengthFormat,
		va_list arguments)
{
	/* Declarating variables */
	int foundSpecifier, item;

	/**
	 * Creating an array of stucture type
	 * containing specifiers with their associated function
	 */
	Specifier_t arraySpecifiers[] = {
		{'c', print_character},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL}
	};
	/**
	 * Increments indexOfFormat to get the next character after % character
	 */
	(*indexFormat)++;
	/**
	 * Initializing foundSpecifier at 0 to indicate that the specifier isn't found
	 */
	foundSpecifier = 0;

	for (item = 0; arraySpecifiers[item].specifier != '\0'; item++)
	{
		/**
		 * Checks if the mentionned specifier in format
		 * is equal to the specifier in arraySpecifier
		 */
		if (arraySpecifiers[item].specifier == format[*indexFormat])
		{
			/**
			 * Calls the function corresponding to the specifier
			 * and gets the return of it in lengthFormat
			 */
			(*lengthFormat) += arraySpecifiers[item].f(arguments);
			foundSpecifier = 1;
			return (foundSpecifier);
		}
	}
	return (foundSpecifier);
}
