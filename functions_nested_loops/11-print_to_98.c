#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all number from n to 98
 * followed by a new line
 * @n: Starting point number
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
		printf("%d", n);
	printf("\n");
}
