#include <stdio.h>

/**
 * main - Print the alphabet in lowercase with
 * the putchar() function
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
