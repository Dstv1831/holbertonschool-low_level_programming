#include "main.h"

/**
 * *leet - function that encodes a string into 1337.
 * @str: String to be encoded
 *
 * Return: Encoded String with the format:
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 */

char *leet(char *str)
{
	int i = 0, j;
	char code [10] = {'a', 'e', 'o', 't', 'l', '4', '3', '0', '7', '1'};

	while (str[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == code[j] || str[i] == (code[j] - 32))
			{
				str[i] = code[j + 5];
			}
		}
		i++;
	}

	return (str);
}

