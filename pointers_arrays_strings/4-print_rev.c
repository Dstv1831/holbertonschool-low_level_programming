#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line, to stdout.
 * @s: String parameter.
 */

void print_rev(char *s)
{
	int counter = 0, i;
	/**
	 * *s - dereferencing = means grabbing the value
	 * of that memory slot on the pointer
	 *
	 * *s++
	 * *(s + 1)
	 * *(s + 2)
	 * this means that we can dereference the value
	 * of each memory slot on the pointer by
	 * incresing 1 with the ++ operator
	 *
	 * where '\0' is the last value of every string
	 * also '\0' in ASCII is of value 0
	 * while (*s) - means while (true/any value different than 0) or while (!= 0)
	 * once while (0) or hit the last value of a string ('\0'), the loop finishes
	 */
	while (s[i++])
		counter++;
	for (i = counter; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
