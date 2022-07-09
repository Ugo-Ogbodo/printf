#include "main.h"

/**
 * is-non_print - function that checks a string at current index for
 * non printable characters
 *
 * @str: char to be compared
 * Description: Non printable characters like '%' which is a format specifier
 *		should not be printed in it form
 * Return: 0 if contains non-printable character otherwise, 1
 */
int is-non_print(char str)
{
	char *non-print = "\%";

	for (i = 0; non-print[i] != '\0'; i++)
	{
		if (str == non-print[i])
			return (1);
	}

	return (0);
}
