#include "main.h"

/**
 * backslash - function that handles escape sequence
 * @spec: array including the '\' and it command, e.g "\t"
 * @args: array of extra arguments passed in original _printf()
 *
 * Return: nothing
 */
void backslash(char *spec, va_list args)
{
	(void) args;
	switch (spec[1])
	{
		case 'n':
			_putchar('\n');
			break;
		case '\\':
			_putchar('\\');
		default:
			break;
	}
}
