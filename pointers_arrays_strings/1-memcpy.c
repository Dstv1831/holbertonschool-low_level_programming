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
	int i = 0;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}

	return (dest);
}
