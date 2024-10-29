#include "main.h"
#include <stdio.h>
/**
 * _strlen - function that returns the lenth of a string
 *
 * @s : String parameter
 *
 * Return : Length of the string
 */

int _strlen(char *s)
{
	int lenght = 0;

	/**
	 * *s = String "s" in position 0
	 * *s++ = String "s" in position 0, 1, 2, 3
	 * and increasing
	 */
	while (*s++)
	{
		lenght++;
	}

	return (lenght);
}
