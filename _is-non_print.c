#include "main.h"

/**
 * is_non_printable - function that checks a string at current index for
 * non printable characters
 *
 * @str: char to be compared
 * Description: Non printable characters like '%' which is a format specifier
 *		should not be printed in it form
 * Return: 0 if contains non-printable character otherwise, 1
 */
int is_non_printable(char str)
{
	int i;

	char *non_print = "\\%";

	for (i = 0; non_print[i] != '\0'; i++)
	{
		if (str == non_print[i])
			return (1);
	}

	return (0);
}
