#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int is_non_printable(char str);

char *store_format(char *spec, const char *str, int *index);

int is_symbol(char *str);

void format_func(char *spec, va_list args);

void assign_data_type(char *data_type, char *spec);

int _strlen(const char *str);

int _isalpha(int c);

int _putchar(char c);

int _strcmp(char *s1, char *s2);

void scan_dt_specs(char *symbol, va_list args);

void print_char(char *spec, va_list arg);

void print_NULL(char *spec, va_list arg);

void print_string(char *spec, va_list arg);

unsigned int _puts_mod(const char *const str, int *index);

void assign_data_type(char *spec, char *data_type);

/**
 * struct specifier - struct that contains a char* symbol and pointer function
 * @symbol: char* that contains the data type specifier
 * @print_data: function pointer that prints specified data type
 */
typedef struct
{
	char *symbol;
	void (*print_data)(char *spec, va_list arg);
} specifier;

/**
 * specifier data_type_specs[] - array of data type specifiers
 */
specifier data_type_specs[] =
{
	{"NULL", print_NULL},
	{"c", print_char},
	{"s", print_string}

};

#endif
