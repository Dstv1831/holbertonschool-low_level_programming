#include <stdio.h>

/**
 * main - prints all the arguments
 * passed to the program
 *
 * @argv: Vector of strings (program arguments)
 * @argc: Argument counter
 *
 * Return: success 0
 */

int main(int argc, char *argv[])
{
	/* Supress the variable argc from compiling */
	(void) argc;

	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}

