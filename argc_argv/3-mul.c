#include <stdio.h>
#include <stdlib.h>

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
	int res = 0;

	if (argc != 3)
		printf("Error\n");

	else
	{

		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	return (0);
}

