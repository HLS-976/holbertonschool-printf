#include "main.h"

/* Prototype of get_specifier function */
void get_specifier(
	const char *format,
	int *indexOfFormat,
	int *lengthFormat,
	va_list listArguments);

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
	int indexOfFormat, lengthFormat;
	va_list listArguments;

	if (!format) /* Check whether or not format exist */
		return (-1);

	/* Initializing variables */
	va_start(listArguments, format);
	indexOfFormat = 0;
	lengthFormat = 0;

	while (format[indexOfFormat] != '\0')
	{
		if (format[indexOfFormat] != '%')
		{ /* Prints the current character if it's different than % charcater and increment the lengthFormat */
			_putchar(format[indexOfFormat]);
			lengthFormat++;
		}
		else
		{ /* Calls the get_specifier function that calls in turn the function corresponding to a specifier */
			get_specifier(format, &indexOfFormat, &lengthFormat, listArguments);
		}
		indexOfFormat++;
	}
	va_end(listArguments); /* Ends the use of the list of arguments*/
	_putchar('\n');
	return (lengthFormat);
}

/**
 * check_specifier - prints the resultat of specifier and return the size
 *
 * @format: string
 * @indexOfFormat: index of current format
 * @lengthFormat: size of current format
 * @listArguments: variadics arguments
 *
 * Return: void
 */

void get_specifier(
		const char *format,
		int *indexOfFormat,
		int *lengthFormat,
		va_list listArguments)
{
	/* Declarating variables */
	int foundSpecifier, indexOfArraySpecifier;
	
	/* Creating an array of stucture type containing specifiers with their associated function */
	Specifier_t arraySpecifiers[] = {
		{'c', print_character},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL}
	};

	(*indexOfFormat)++; /* Increments indexOfFormat to get the next character after % character */
	foundSpecifier = 0; /* Initializing foundSpecifier at 0 to indicate that the specifier isn't found yet */

	for (indexOfArraySpecifier = 0;
		arraySpecifiers[indexOfArraySpecifier].specifier != '\0';
		indexOfArraySpecifier++)
	{
		/* Checks if the mentionned specifier in format is equal to the specifier in arraySpecifier */
		if (arraySpecifiers[indexOfArraySpecifier].specifier == format[*indexOfFormat])
		{
			/* Calls the function corresponding to the specifier and gets the return of it in lengthFormat */
			(*lengthFormat) +=
			arraySpecifiers[indexOfArraySpecifier].f(listArguments);
			foundSpecifier = 1;
			return;
		}
	}
	if (foundSpecifier == 0)
	{ /* Displays the specifier as is if it doesn't conform to the expected specifiers */
		_putchar('%');
		_putchar(format[*indexOfFormat]);
		(*lengthFormat) += 2;
	}
}
