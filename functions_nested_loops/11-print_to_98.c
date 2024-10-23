#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all number from n to 98
 * followed by a new line
 * @n - Starting point number
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i <= 98; i--)
			printf(i)
	}
	else if (n < 98)
	{
		for (i = n; i >= 98; i++)
			printf(i)
	}
	else
		printf(n)
}
