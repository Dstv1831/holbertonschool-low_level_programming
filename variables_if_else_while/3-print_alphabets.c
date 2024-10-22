#include <stdio.h>

/**
 * main - Print the alphabet in lowercase,
 * and UPPERCASE using the putchar() function
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	for (i = 65; i < 91; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
