#include <stdio.h>

/**
 * main - Return the name of the program
 *
 * @argv: Vector of strings (program arguments)
 *
 * return: success 0
 */

int main (int argc, char *argv[])
{
	/* Supress the variable argc from compiling */
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
