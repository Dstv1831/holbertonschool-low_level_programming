#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of '0' and '1' characters.
 *
 * Return: The converted unsigned int value. 
 *         Returns 0 if:
 *         - @b is NULL.
 *         - The string contains any character other than '0' or '1'.
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
