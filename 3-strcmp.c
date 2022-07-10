#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if s1 = s2, negative figure if s1 < s2 &
 *		positive figure if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; (s1[i] != '\0') || (s2[i] != '\0'); i++)
	{
		if ((s1[i] > s2[i]) || (s2[i] == '\0'))
			return (s1[i] - s2[i]);
		else if ((s1[i] < s2[i]) || (s1[i] == '\0'))
			return (s1[i] - s2[i]);
	}

	return (0);
}
