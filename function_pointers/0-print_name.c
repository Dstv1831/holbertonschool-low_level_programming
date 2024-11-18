#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 *
 * @name: Mame to print
 * @f: Pointer to character
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
