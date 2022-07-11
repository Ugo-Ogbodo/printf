#include "main.h"

/**
 * scan_dt_specs - function that compares the passed symbol with elements of
 * the data_type_specs[]
 * @symbol: symbol of data type passed to the format specifier, eg 'c', 'ld'
 * @args: list of extra arguments passed in _printf()
 *
 * Return: nothing
 */
void scan_dt_specs(char *symbol, va_list args)
{
	int index;

	specifier data_type_specs[] =
	{
		{"NULL", print_NULL},
		{"c", print_char},
		{"s", print_string}
	};

	index = is_symbol(symbol);

	if (index < 3)
		data_type_specs[index].print_data(symbol, args);
}
