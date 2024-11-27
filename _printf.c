#include "main.h"

void get_specifier(
	const char *format,
	int *indexOfFormat,
	int *sizeOfFormat,
	va_list variadicArguments);

/**
 * _printf - prints output according to a format
 * @format: a string where the user defines a specifier
 * Return: int
 */

int _printf(const char *format, ...)
{
	int indexOfFormat, sizeOfFormat;
	va_list variadicArguments;

	va_start(variadicArguments, format);
	indexOfFormat = 0;
	sizeOfFormat = 0;

	while (format[indexOfFormat] != '\0')
	{
		if (format[indexOfFormat] != '%')
		{
			_putchar(format[indexOfFormat]);
			sizeOfFormat++;
		}
		else
		{
			get_specifier(format, &indexOfFormat, &sizeOfFormat, variadicArguments);
		}
		indexOfFormat++;
	}
	va_end(variadicArguments);
	_putchar('\n');
	return (sizeOfFormat);
}

/**
 * check_specifier - prints the resultat of specifier and return the size
 * @format: string
 * indexOfFormat: index of current format
 * @sizeOfFormat: size of current format
 * @variadicArguments: variadics arguments
 * Return: void
 */

void get_specifier(
		const char *format,
		int *indexOfFormat,
		int *sizeOfFormat,
		va_list variadicArguments)
{
	int foundSpecifier, indexOfArraySpecifier;

	Specifier_t arraySpecifiers[] = {
		{'c', print_c},
		{'d', print_d},
		{'\0', NULL}
	};

	(*indexOfFormat)++;
	foundSpecifier = 0;

	for (indexOfArraySpecifier = 0;
		arraySpecifiers[indexOfArraySpecifier].specifier != '\0';
		indexOfArraySpecifier++)
	{
		if (arraySpecifiers[indexOfArraySpecifier].specifier ==
			format[*indexOfFormat])
		{
			(*sizeOfFormat) +=
			arraySpecifiers[indexOfArraySpecifier].f(variadicArguments);
			(*sizeOfFormat)++;
			foundSpecifier = 1;
			break;
		}
	}
	if (foundSpecifier == 0)
		_putchar('E');
}
