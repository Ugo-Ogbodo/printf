#include <stdio.h>

/**
 * struct specifier - struct that contains a char* symbol and pointer function
 * @symbol: char* that contains the data type specifier
 * @print_data: function pointer that prints specified data type
 */
typedef struct
{
        char *symbol;
} specifier;

/**
 * specifier data-type_specs[] - array of data type specifiers
 */
specifier data_type_specs[] =
{
	{"c"}, {"s"}
};
