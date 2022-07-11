#include "main.h"

/**
 * store_format - function that stores given format in a string
 * @str: string to be checked
 * @index: current index where specifier intro was found, e.g '%' or '\'
 * @spec: pointer to format specifier sting
 *
 * Return: Given format as one char
 */
char *store_format(char *spec, const char *str, int *index)
{
	int i, j;
       
	i = *index;

	for (j = 0; !(is_symbol(&(str[i]))); i++, j++)
		spec[j] = str[i];

	spec[j] = str[i];
	spec[++j] = '\0';

	*index = ++i;

	return (spec);
}
