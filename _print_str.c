#include "main.h"

/**
 * _print_str - loops through a string and prints till specific char is
 *		reached, i.e '%' & '\'
 * @str: string to be looped through
 * @index: index of string to begin printing, which gets updated whenever the
 * loop breaks
 *
 * Return: value of index where function breaks
 */
int _print_str(const char *const str, int *index)
{
	int i = *index;

	for (; is_only_printable(str[i]); i++)
	{
		_putchar(str[i])
	}

	*index = i;

	return (0);
}
