#ifndef VARFUN_H
#define VARFUN_H

/**
 * struct format_type - new struct to accomodate each data type
 * @type: Data type
 * @print: Function pointer to a function that prints
 * the data type corresponding  to the format
 */
#include <stdarg.h>

typedef struct format_type
{
	char *type;
	void (*print)(va_list value);
} form;


/**
 * sum_them_all - Function that adds all the parameters
 *
 * @n: Number of parameters
 *
 * Return: 0 success
 *
 */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_c(va_list arguments);
void print_i(va_list arguments);
void print_f(va_list arguments);
void print_s(va_list arguments);
void print_all(const char * const format, ...);

#endif
