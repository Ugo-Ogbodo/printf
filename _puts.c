#include "main.h"

/**
 * _puts - Prints a string, followed by a new line
 * @str: Takes string character array str as Parameter
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
}
