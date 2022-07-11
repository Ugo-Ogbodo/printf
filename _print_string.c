#include "main.h"

/**
 * print_string - prints "NULL" on stdout
 * @spec:
 * @args:
 *
 * Return: nothing
 */
void print_string(char *spec, va_list args)
{
	char *s = va_arg(args, char*);
	(void)spec;
	
        printf("%s", s);
}       
