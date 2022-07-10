#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>

int _strlen(char *str);

unsigned int _puts_mod(const char *const str, int *index);

is-non_printable(char str);

void assign-data_type(char *spec, char *data_type);

/**
 * struct specifier - struct that contains a char* symbol and pointer function
 * @symbol: char* that contains the data type specifier
 * @print_data: function pointer that prints specified data type
 */
typedef struct
{
	char *symbol;
	void (*print_data)(char *str, va_list arg);
} specifier;

/**
 * specifier data-type_specs[] - array of data type specifiers
 */
specifier data-type_specs[] =
{
	{"c", print_char},
	{"s", print_string}

};

#endif
