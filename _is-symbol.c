#include "main.h"

/**
 * is_symbol - function that checks if input char is a symbol
 * e.g 'c', 'd', etc
 * @c: char to check
 *
 * Return: 1 if symbol is found otherwise, 0
 */
int is_symbol(const char c)
{
	int i;
	char *symbols;

	symbols = "cs";

	for (i = 0; i < 2; i++)
	{
		if (c == symbols[i])
			return (1);
	}
	
	return (0);
}
