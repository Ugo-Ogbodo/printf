#include "main.h"

/**
 * is_dt - function that checks if input char is a specifier,
 * e.g 'c', 'd', etc
 * @str: string to check
 *
 * Return: index where specifier is found in the data_type_specs[] array,
 * otherwise, 0 if no specifier is found
 */
int is_dt(const char *str)
{
	int i;
	specifier data_type_specs[] =
	{
		{"NULL", print_NULL},
		{"c", print_char},
		{"s", print_string}
	};


	for (i = 1; i < 3; i++)
	{
		if (_strcmp(str, data_type_specs[i].symbol) == 0)
			return (i);
	}

	return (0);
}
