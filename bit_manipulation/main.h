#ifndef BIT_H
#define BIT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - Convert a binary string to an unsigned integer.
 * @b: Pointer to a string containing '0' and '1' characters.
 *
 * Return: The converted unsigned integer value.
 * Returns 0 if b is NULL. or the string contains
 * any character other than '0' or '1'.
 */
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif /* BIT_H */
