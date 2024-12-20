#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: String parameter.
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char *start, *end, temp;



	/**
	 * len/2 because the string swap its
	 * completed, when the pointer start and end
	 * reach cross in the middle
	 *
	 * a	b	c	d	e
	 * |	|	|	|	|
	 * st				end
	 *
	 * pointer notation - s[0] and *s are the same
	 * which is value of the memory slot of pointer s at position 0
	 * therefore s[i++] = *s++ , going trough the values of the pointer
	 */
	while (s[i++])
		len++;

	start = s;
	end = s + len - 1;

	for (i = 0; i < len / 2 ; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		end--;
		start++;
	}
}
