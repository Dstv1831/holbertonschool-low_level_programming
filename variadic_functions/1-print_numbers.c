#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers followed by a new line
 *
 * @separator: string to be printed between numbers
 * n: number of integers passed to the function
 *
 * Return: 0 success
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i;

	va_start(arg_list, n);


	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(arg_list, int));
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(arg_list);
}
