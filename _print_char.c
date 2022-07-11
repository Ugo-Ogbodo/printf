#include "main.h"

/**
 * print_char - prints character to stdout
 * @arg: list of arguments to be printed
 *
 * Return: nothing
 */
void print_char(char *spec, va_list arg)
{
	char letter;

	(void) spec;
	letter = va_arg(arg, int);
	_putchar(letter);
}
