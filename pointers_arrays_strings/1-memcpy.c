#include "main.h"

/**
 * _memcpy - Function that copies memory area.
 *
 * @dest: Memory buffer to copy to
 * @src: Memory buffer to copy from
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the memory buffer "dest" after being copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
