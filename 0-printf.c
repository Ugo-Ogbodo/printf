#include "main.h"

/**
 * _printf - prints a string
 * @format: a character string, composed of zero or more directives
 *
 * Return: the number of characters printed (excluding the null bytes)
 */
int _printf(const char *format, ...)
{
	int i;
	char *spec;
	va_list args;

	va_start(args, forrmat);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (is_non_printable(format[i]))
		{
			store_format(spec, format, &i);
			format_func(spec, args);
		}

		_putchar(str[i]);
	}
	va_end(arg);

	return (i);
}
