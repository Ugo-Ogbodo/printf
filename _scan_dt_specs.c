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

	index = is_symbol(symbol);

	if (index <= 2)
		data_type_specs[j].print_data(spec, args);
}
