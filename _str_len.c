#include "main.h"

/**
 * _strlen - calculates length of string
 * @str: string to be checked
 *
 * Description: calculates the just length of given string
 * Return: length as unsigned int
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		++len;

	return (len);
}
