#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference of the first unmatched characters.
 *         If str1 == str2, 0.
 *         If str1 > str2, the positive difference of the first unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{
	int  i = 0, j = 0, s1_length = 0, s2_length = 0, val = 0;

	while (s1[j++])
		s1_length++;

	for (i = 0; s2[i] <= '\0'; i++)
		s2_length++;	
	
	if (s1_length < s2_length)
		val = -1;
	else if (s1_length > s2_length)
		val = 1;
	return (val);
}
