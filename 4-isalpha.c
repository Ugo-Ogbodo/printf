#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks for uppercase char
 * @c: Takes int as Argument
 * Description: Checks for uppercase char
 * Return: 1 if "c" is a letter, lowercase or uppercase,
 *		else, returns 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
