#include "main.h"

/**
 * print_NULL - prints "NULL" on stdout
 * @spec:
 * @args:
 *
 * Return: nothing
 */
void print_NULL(char *spec, va_list args)
{
	(void)spec;
	(void)args;
	printf("%s", "NULL");
}
