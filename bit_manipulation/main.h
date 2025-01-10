#ifndef BIT_H
#define BIT_H

#include <stdlib.h>

/**
 * binary_to_uint - Convert a binary string to an unsigned integer.
 * @b: Pointer to a string containing '0' and '1' characters.
 *
 * Return: The converted unsigned integer value.
 * Returns 0 if b is NULL. or the string contains
 * any character other than '0' or '1'.
 */

unsigned int binary_to_uint(const char *b);

#endif /* BIT_H */
