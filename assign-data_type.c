#include "main.h"

/**
 * assign_data_type - it assigns data type of format specifier string
 * @spec: pointer to the passed in format specifier
 * @data_type: pointer to string where data type of format will be stored
 *
 * Description: function that loops through a given format specifier
 * string(spec) and assigns the data type format specifier passed to data_type
 * string
 *
 * Return: nothing
 */
void assign_data_type(char *data_type, char *spec)
{
	int i = 0, j = 0, len;

	len = _strlen(spec);
	for (i = 0; i < len; i++)
	{
		if (_isalpha(spec[i]))
			data_type[j++] = spec[i];
	}

	data_type[j] = '\0';
}
