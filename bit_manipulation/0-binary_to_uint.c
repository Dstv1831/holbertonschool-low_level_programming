#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: Pointing to a string of 0 and 1 chars
 *
 * Return: Value of the unsigned int, otherwise NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' &&  b[i] != '1')
			return (0);
		num = (num << 1) | (b[i] - '0');
	}

	return (num);
}
