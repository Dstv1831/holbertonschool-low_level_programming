#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that converts string to integer.
 *
 * @s: String that will be converted.
 *
 * Return: Integer value
 */

/*
 * (*s - '0') - Takes the value of s* from asci to decimal
 * by sustracting '0' or 48
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int number = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');
		else if (number > 0)
			break;
	} while (*s++);

	return (number * sign);
}
