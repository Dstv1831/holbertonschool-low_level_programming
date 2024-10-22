#include <stdio.h>

/**
 * print_alphabet - Function in charge of
 * printing the alphabet by
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

/**
 * main - Print the alphabet by
 * calling the print_alphabet function()
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	print_alphabet();
	return (0);
}
