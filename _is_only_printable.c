#include "main.h"

/**
 * is_only_printable - function that checks a string at current index for
 *			printable characters
 * @str: char to be compared
 * Description: Non printable characters like '%' which is a format specifier
 *		should not be printed in it form
 * Return: 0 if contain printable character otherwise, 1
 */
int is_only_printable(char str)
{
	char *non-print = "\%";

	for (i = 0; non-print[i] != '\0'; i++)
	{
		if (str == non-print[i])
			return (0);
	}

	return (1);
}
