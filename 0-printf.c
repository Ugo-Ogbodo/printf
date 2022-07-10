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

	spec = malloc(_strlen(format) * sizeof(int));
	if (spec == NULL)
		return (0);

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (is_non_printable(format[i]))
		{
			store_format(spec, format, &i);
			format_func(spec, args);
		}

		_putchar(format[i]);
	}
	va_end(args);
	free(spec);

	return (i);
}
