#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_c - prints a character type argument ("char")
 * @arguments: list of all types of arguments passed
 * to the function
 */

void print_c(va_list arguments)
{
	char c;

	c = va_arg(arguments, int);
	printf("%c", c);
}

/**
 * print_i - prints an integer type argument ("int")
 * @arguments: list of all types of arguments passed
 * to the function
 */

void print_i(va_list arguments)
{
	int n;

	n = va_arg(arguments, int);
	printf("%d", n);
}

/**
 * print_f - prints a float type argument ("float")
 * @arguments: list of all types of arguments passed
 * to the function
 */

void print_f(va_list arguments)
{
	double f;

	f = va_arg(arguments, double);
	printf("%f", f);
}

/**
 * print_s - prints an string type argument ("string")
 * @arguments: list of all types of arguments passed
 * to the function
 */

void print_s(va_list arguments)
{
	char *s;

	s = va_arg(arguments, char *);

	if (arguments == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

/**
 * print_all - prints anytype of argument
 * ("char","int","float","char *")
 * @format: list of all types of arguments passed
 * to the function
 *
 * Description: Every time we use va_arg, it modifies the
 * value of the va_list ("arguments") to point to the subsequent argument
 *
 * va_start parameters are the list ("arguments") and
 * the last mandatory argument of the function, in this case is ("format")
 * whihc is the only arg
 */

void print_all(const char * const format, ...)
{
	va_list arguments;
	int i = 0, j;
	char *sep = "";
	form args[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s}
	};

	va_start(arguments, format);

	while (format && format[i] != '\0')
	{
		j = 0;

		while (j < 4 && format[i] != *(args[j].type))
			j++;

		if (j < 4)
		{
			printf("%s", sep);
			args[j].print(arguments);
			sep = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(arguments);
}

