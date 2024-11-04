#include "main.h"

/**
 * _memset - Funciton that fills memory with a constant byte
 *
 * @s: Memory buffer
 * @b: Constant byte
 * @n: Stopping memory slot
 *
 * Return: Pointer to the memory buffer after being filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	unsigned char *mem = s;

	while (i <= n)
	{
		/* s[i] - pointer value in that memory slot */
		mem[i] = b;
		i++;
	}

	return (mem);
}
