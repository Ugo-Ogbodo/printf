#include "main.h"

/**
 * format_func - checks the format intro for '%' or '\' and carries
 * out their function
 * @spec: pointer to format specifier
 * @args: list of extra arguments passed in _printf()
 *
 * Description: It sorts for the symbol(%d, \n, etc), then call the right
 * function for that symbol, e.g. %d will print an integer,
 * '\n' will print new line
 *
 * Return: nothing
 */
void format_func(char *spec, va_list args)
{
	char *symbol;

	if (spec[0] == '%' || spec[0] == \\)
	{
		assign_data_type(symbol, spec);
		scan_dt_specs(symbol, args);
	}
}
