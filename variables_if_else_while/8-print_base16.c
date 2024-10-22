#include <stdio.h>

/**
 * main - Print the numbers of base 16 in lowercase,
 * using putchar() function
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
