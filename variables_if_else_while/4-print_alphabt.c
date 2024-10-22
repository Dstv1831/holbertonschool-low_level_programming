#include <stdio.h>

/**
 * main - Print all the letters except q and e
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'e' || i != 'q')
			putchar(i);
	putchar('\n');

	return (0);
}
