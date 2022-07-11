#include "main.h"

/**
 * print_string - prints "NULL" on stdout
 * @spec: format specifier of parent string
 * @args: pointer to list of arguments passd in parent _print()
 *
 * Return: nothing
 */
void print_string(char *spec, va_list args)
{
	int i;
	char *str, *spec1;

	str = va_arg(args, char*);
	(void)spec;
	spec1 = malloc(sizeof(char) * _strlen(str) + 1);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 92)
		{
			store_format(spec1, str, i);
			backslash(spec1, args);
			i += (_strlen(spec1) - 1);
		}
		else
			_putchar(str[i]);
	}
	free(spec1);
}
