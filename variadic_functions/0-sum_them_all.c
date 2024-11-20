#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Function that adds all the parameters
 *
 * @n: Number of parameters
 *
 * Return: 0 success
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(arg_list, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(arg_list, int);

	va_end(arg_list);
	return (sum);
}
