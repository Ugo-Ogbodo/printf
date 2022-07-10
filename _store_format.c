#include "main.h"

/**
 * store_format - function that stores given format in a string
 * @str: string to be checked
 * @index: current index where specifier intro was found, e.g '%' or '\'
 * @spec: pointer to format specifier sting
 *
 * Return: Given format as one char
 */
char *store_format(char *spec, char *str, int *index)
{
	int i = *index;

	for (j = 0; !(is_symbol(str[j])); i++, j++)
		spec[j] = str[i];

	spec[j] = str[i];
	spec[++j] = '\0';

	*index = ++i;

	return (spec);
}
