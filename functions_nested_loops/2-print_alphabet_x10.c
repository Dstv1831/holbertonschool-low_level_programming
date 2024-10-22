#include <stdio.h>

/**
 * print_alphabet_x10 - Function in charge of
 * printing the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i;
	int n;

	for (n = 0; n <= 10; n++)
	{
		for (i = 97; i < 123; i++)
			putchar(i);
		putchar('\n');
	}
	return (0);
}

/**
 * main - Print the alphabet by
 * calling the print_alphabet_x10 function()
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}
