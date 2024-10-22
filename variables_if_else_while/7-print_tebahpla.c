#include <stdio.h>

/**
 * main - Print the alphabet in reverse with
 * the putchar() function
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
