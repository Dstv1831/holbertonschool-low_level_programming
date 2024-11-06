#include <stdio.h>

/**
 * main - Return the number of arguments
 * passed to the program
 *
 * @argv: Vector of strings (program arguments)
 * @argc: Argument counter
 *
 * Return: success 0
 */

int main(int argc, char *argv[])
{
	/* Supress the variable argv from compiling */
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

