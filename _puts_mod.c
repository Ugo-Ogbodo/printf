#include "main.h"

/**
 * _puts_mod - loops through a string and prints till specific char is
 *		reached, i.e '%' & '\'
 * @str: string to be looped through
 * @index: index of string to begin printing, which gets updated whenever the
 * loop breaks
 *
 * Return: value of index where function breaks
 */
int _puts_mod(const char *const str, int *index)
{
	int i = *index;

	for (; str[i] != '\0'; i++)
	{
		if (is-non_print(str[i]))
			_putchar(str[i]);
	}

	*index = i;

	return ();
}
