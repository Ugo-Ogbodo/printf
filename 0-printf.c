#include "main.h"

/**
 * _printf - prints a string
 * @format: a character string, composed of zero or more directives
 *
 * Return: the number of characters printed (excluding the null bytes)
 */
int _printf(const char *format, ...)
{
	int ii;
	char *spec;
	va_list args;

	spec = malloc(_strlen(format) * sizeof(char) + 1);
	if (spec == NULL)
		return (0);

	va_start(args, format);
	for (ii = 0; format[ii] && format[ii] != '\0'; ii++)
	{
		if (is_non_printable(format[ii]))
		{
			if (format[ii] == 92)
			{
				store_format(spec, format, ii);
				backslash(spec, args);
				ii += (_strlen(spec) - 1);
			}
			else
			{
				store_format(spec, format, ii);
				format_func(spec, args);
				ii += (_strlen(spec) - 1);
			}
		}
		else
			_putchar(format[ii]);
	}

	va_end(args);
	free(spec);

	return (ii);
}
